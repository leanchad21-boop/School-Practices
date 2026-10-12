
import cv2
import numpy as np
import mediapipe as mp
ModuleNotFoundError
raise SystemExit(
        f"Missing required Python module: {e.name}. "
        "Install dependencies with: pip install opencv-python mediapipe numpy"
    )

mp_hands = mp.solutions.hands
mp_drawing = mp.solutions.drawing_utils

hand_model = mp_hands.Hands(
    static_image_mode=False,
    max_num_hands=1,
    min_detection_confidence=0.7,
    min_tracking_confidence=0.7,
)


def get_finger_status(landmarks, hand_label):
    fingers = []
    # Thumb uses horizontal position depending on left/right hand
    thumb_tip = landmarks[4]
    thumb_ip = landmarks[3]
    if hand_label == 'Right':
        fingers.append(thumb_tip.x > thumb_ip.x)
    else:
        fingers.append(thumb_tip.x < thumb_ip.x)

    # Other fingers use vertical position of tip vs pip
    tips = [8, 12, 16, 20]
    pips = [6, 10, 14, 18]
    for tip_index, pip_index in zip(tips, pips):
        fingers.append(landmarks[tip_index].y < landmarks[pip_index].y)

    return fingers


def recognize_letter(status, landmarks):
    thumb, index, middle, ring, pinky = status

    if not any(status):
        return 'A'
    if thumb and index and middle and ring and pinky:
        return 'B'
    if index and not middle and not ring and not pinky:
        return 'D'
    if index and middle and not ring and not pinky:
        return 'V'
    if pinky and not index and not middle and not ring and not thumb:
        return 'I'
    if thumb and index and not middle and not ring and not pinky:
        return 'L'

    # C shape detection by thumb-index distance
    tip_thumb = np.array([landmarks[4].x, landmarks[4].y])
    tip_index = np.array([landmarks[8].x, landmarks[8].y])
    distance = np.linalg.norm(tip_thumb - tip_index)
    if distance < 0.08 and index and thumb:
        return 'C'

    return ''


def main():
    cap = cv2.VideoCapture(0)
    if not cap.isOpened():
        print('Cannot open camera')
        return

    while True:
        success, frame = cap.read()
        if not success:
            break

        frame = cv2.flip(frame, 1)
        rgb = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)
        results = hand_model.process(rgb)
        letter = ''

        if results.multi_hand_landmarks:
            for hand_landmarks, hand_info in zip(results.multi_hand_landmarks, results.multi_handedness):
                hand_label = hand_info.classification[0].label
                status = get_finger_status(hand_landmarks.landmark, hand_label)
                letter = recognize_letter(status, hand_landmarks.landmark)
                mp_drawing.draw_landmarks(frame, hand_landmarks, mp_hands.HAND_CONNECTIONS)
                break

        display = letter if letter else 'No sign detected'
        cv2.putText(frame, f'Sign: {display}', (10, 40), cv2.FONT_HERSHEY_SIMPLEX, 1.1, (0, 255, 0), 2)
        cv2.putText(frame, 'Press Q to quit', (10, frame.shape[0] - 20), cv2.FONT_HERSHEY_SIMPLEX, 0.7, (255, 255, 255), 1)
        cv2.imshow('Sign Language Letter Tracker', frame)

        if cv2.waitKey(1) & 0xFF == ord('q'):
            break

    cap.release()
    cv2.destroyAllWindows()


if __name__ == '__main__':
    main()
