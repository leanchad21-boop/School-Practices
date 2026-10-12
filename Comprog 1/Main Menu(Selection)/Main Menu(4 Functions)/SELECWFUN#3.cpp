#include <iostream>
#include <cstring>
using namespace std;

//WITHOUT ARGUMENT, WITH RETURN VALUE
//------------FUNCTION DECLARATION------------
float average();
char posneg();
char oddeven();
float findgreater();
int smallest();
float grade();
char temp();
float sales();
int day();
char letters();

//------------FUNCTION------------
float average(){
    float prelim, midterm, final;
    cout << "Enter PRELIM Grade: "; cin >> prelim;
    cout << "Enter MIDTERM Grade: "; cin >> midterm;
    cout << "Enter FINAL Grade: "; cin >> final;

    return (prelim + midterm + final) / 3;

cin.get(); cin.get();
}

char posneg(){
    float num;
    cout << "Enter a Number: "; cin >> num;

    if(num > 0) return 'P';
    else return 'N';

cin.get(); cin.get();
}

char oddeven(){
    int num;
    cout << "Enter a Number: "; cin >> num;

    if(num % 2 == 0) return 'E';
    else return 'O';

cin.get(); cin.get();
}

float findgreater(){
    float n1, n2;
    cout << "Enter the First Number: "; cin >> n1;
    cout << "Enter the Second Number: "; cin >> n2;

    return (n1 > n2) ? n1 : n2;

cin.get(); cin.get();
}

int smallest(){
    int n1, n2, n3;
    cout << "Enter three Numbers: "; cin >> n1 >> n2 >> n3;

    if(n1 <= n2 && n1 <= n3) return n1;
    else if(n2 <= n1 && n2 <= n3) return n2;
    else return n3;

cin.get(); cin.get();
}

float grade(){
    float p, m, f, ave;
    cout << "Enter PRELIM, MIDTERM, FINAL Grades: "; cin >> p >> m >> f;
    ave = (p + m + f) / 3;
    return ave;

cin.get(); cin.get();
}

char temp(){
    float t;
    cout << "Enter Temperature: "; cin >> t;

    if(t < 0) return 'F';    // Freezing
    else if(t < 10) return 'V'; // Very Cold
    else if(t < 20) return 'C'; // Cold
    else if(t < 30) return 'N'; // Normal
    else if(t < 40) return 'H'; // Hot
    else return 'X';             // Very Hot

cin.get(); cin.get();
}

float sales(){
    float s;
    cout << "Enter Sales: "; cin >> s;

    if(s <= 15000) return s*0.15;
    else if(s <= 20000) return s*0.20;
    else if(s <= 25000) return s*0.25;
    else if(s <= 30000) return s*0.30;
    else return s*0.40;

cin.get(); cin.get();
}

int day(){
    int d;
    cout << "Enter Day Number (1-7): "; cin >> d;
    return d;

cin.get(); cin.get();
}

char letters(){
    char l;
    cout << "Enter a Letter: "; cin >> l;

    if(strchr("aeiouAEIOU", l)) return 'V';
    else return 'C';

cin.get(); cin.get();
}

//------------MAIN MENU------------
int main(){
    int choice;

    do{
        cout << "\nMain Menu\n";
        cout << "1 - Final Average\n2 - Positive Negative\n3 - Odd Even\n4 - Greatest Number\n";
        cout << "5 - Smallest Number\n6 - Average Grade\n7 - Temperature\n8 - Total Sales\n";
        cout << "9 - Days in a Week\n10 - Letters\n11 - Exit\n";
        cout << "Enter your Choice: "; cin >> choice;

        switch(choice){
            case 1:{
                float avg = average();
                cout << "AVERAGE: " << avg << endl;
                if(avg >= 75) cout << "Passed!" << endl;
                else cout << "Failed!" << endl;
                break;
            }
            case 2:{
                char res = posneg();
                if(res=='P') cout << "Positive" << endl;
                else cout << "Negative" << endl;
                break;
            }
            case 3:{
                char res = oddeven();
                if(res=='E') cout << "EVEN" << endl;
                else cout << "ODD" << endl;
                break;
            }
            case 4:{
                float g = findgreater();
                cout << g << " is greater" << endl;
                break;
            }
            case 5:{
                int s = smallest();
                cout << s << " is the smallest number" << endl;
                break;
            }
            case 6:{
                float ave = grade();
                cout << "AVERAGE: " << ave << endl;
                if(ave < 0 || ave > 100) cout << "Invalid Grade" << endl;
                else if(ave >= 97) cout << "Grade equivalent: 1.0" << endl;
                else if(ave >= 94) cout << "Grade equivalent: 1.25" << endl;
                else if(ave >= 91) cout << "Grade equivalent: 1.5" << endl;
                else if(ave >= 88) cout << "Grade equivalent: 1.75" << endl;
                else if(ave >= 86) cout << "Grade equivalent: 2.0" << endl;
                else if(ave >= 82) cout << "Grade equivalent: 2.25" << endl;
                else if(ave >= 79) cout << "Grade equivalent: 2.5" << endl;
                else if(ave >= 76) cout << "Grade equivalent: 2.75" << endl;
                else if(ave >= 75) cout << "Grade equivalent: 3.0" << endl;
                else cout << "Grade equivalent: 5.0" << endl;
                break;
            }
            case 7:{
                char res = temp();
                if(res=='F') cout << "Freezing Weather" << endl;
                else if(res=='V') cout << "Very Cold Weather" << endl;
                else if(res=='C') cout << "Cold Weather" << endl;
                else if(res=='N') cout << "Normal Temperature" << endl;
                else if(res=='H') cout << "Hot" << endl;
                else cout << "Very Hot" << endl;
                break;
            }
            case 8:{
                float c = sales();
                cout << "Commission= " << c << endl;
                break;
            }
            case 9:{
                int d = day();
                switch(d){
                    case 1: cout << "Sunday" << endl; break;
                    case 2: cout << "Monday" << endl; break;
                    case 3: cout << "Tuesday" << endl; break;
                    case 4: cout << "Wednesday" << endl; break;
                    case 5: cout << "Thursday" << endl; break;
                    case 6: cout << "Friday" << endl; break;
                    case 7: cout << "Saturday" << endl; break;
                    default: cout << "Invalid" << endl;
                }
                break;
            }
            case 10:{
                char res = letters();
                if(res=='V') cout << "Vowel" << endl;
                else cout << "Consonant" << endl;
                break;
            }
            case 11: exit(0);
            default: cout << "Invalid Input" << endl;
        }

    } while(choice != 11);

    return 0;
}
