#include <iostream>
#include <cstring>
using namespace std;

//WITH ARGUMENT, NO RETURN VALUE
//------------FUNCTION DECLARATION------------
void average(float prelim, float midterm, float final);
void posneg(float num);
void oddeven(int num);
void findgreater(float n1, float n2);
void smallest(int n1, int n2, int n3);
void grade(float p, float m, float f);
void temp(float temperature);
void sales(float sales);
void day(int day);
void letters(char letter);

//------------FUNCTION------------
void average(float prelim, float midterm, float final){
    float avg = (prelim + midterm + final) / 3;
    char remarks[10];

    if (avg >= 75)
        cout << "Passed!";
    else
        cout << "Failed!";

    cout << "\nPRELIM: " << prelim << endl;
    cout << "MIDTERM: " << midterm << endl;
    cout << "FINAL: " << final << endl;
    cout << "AVERAGE: " << avg << endl;
    cout << "REMARKS: " << remarks << endl;

cin.get(); cin.get();
}

void posneg(float num){
    if (num == 0)
        cout << "The Number is Neutral";
    else if (num > 0)
        cout << "The Number is Positive";
    else
        cout << "The Number is Negative";

    cout << endl;

cin.get(); cin.get();
}

void oddeven(int num){
    if (num == 0)
        cout << "The Number is NEUTRAL";
    else if (num % 2 == 0)
        cout << "The Number is EVEN";
    else
        cout << "The Number is ODD";

    cout << endl;

cin.get(); cin.get();
}

void findgreater(float n1, float n2){
    if (n1 > n2)
        cout << n1 << " is greater than " << n2;
    else
        cout << n2 << " is greater than " << n1;

    cout << endl;

cin.get(); cin.get();
}

void smallest(int n1, int n2, int n3){
    if (n1 <= n2 && n1 <= n3)
        cout << n1 << " is the smallest number";
    else if (n2 <= n1 && n2 <= n3)
        cout << n2 << " is the smallest number";
    else
        cout << n3 << " is the smallest number";

    cout << endl;

cin.get(); cin.get();
}

void grade(float p, float m, float f){
    float ave = (p + m + f) / 3;
    cout << "AVERAGE: " << ave << endl;

    if (ave < 0 || ave > 100)
        cout << "Invalid Grade";
    else if (ave >= 97)
        cout << "Grade equivalent: 1.0";
    else if (ave >= 94)
        cout << "Grade equivalent: 1.25";
    else if (ave >= 91)
        cout << "Grade equivalent: 1.5";
    else if (ave >= 88)
        cout << "Grade equivalent: 1.75";
    else if (ave >= 86)
        cout << "Grade equivalent: 2.0";
    else if (ave >= 82)
        cout << "Grade equivalent: 2.25";
    else if (ave >= 79)
        cout << "Grade equivalent: 2.5";
    else if (ave >= 76)
        cout << "Grade equivalent: 2.75";
    else if (ave >= 75)
        cout << "Grade equivalent: 3.0";
    else
        cout << "Grade equivalent: 5.0";

    cout << endl;

cin.get(); cin.get();
}

void temp(float temperature){
    if (temperature < 0)
        cout << "Freezing Weather";
    else if (temperature < 10)
        cout << "Very Cold Weather";
    else if (temperature < 20)
        cout << "Cold Weather";
    else if (temperature < 30)
        cout << "Normal Temperature";
    else if (temperature < 40)
        cout << "Hot";
    else
        cout << "Very Hot";

    cout << endl;

cin.get(); cin.get();
}

void sales(float sales){
    float commission;

    if (sales <= 15000)
        commission = sales * 0.15;
    else if (sales <= 20000)
        commission = sales * 0.20;
    else if (sales <= 25000)
        commission = sales * 0.25;
    else if (sales <= 30000)
        commission = sales * 0.30;
    else
        commission = sales * 0.40;

    cout << "Commission= " << commission << endl;

cin.get(); cin.get();
}

void day(int d){
    if (d == 1) cout << "Sunday";
    else if (d == 2) cout << "Monday";
    else if (d == 3) cout << "Tuesday";
    else if (d == 4) cout << "Wednesday";
    else if (d == 5) cout << "Thursday";
    else if (d == 6) cout << "Friday";
    else if (d == 7) cout << "Saturday";
    else cout << "Invalid";

    cout << endl;

cin.get(); cin.get();
}

void letters(char letter){
    if (strchr("aeiouAEIOU", letter))
        cout << "Vowel";
    else
        cout << "Consonant";

    cout << endl;

cin.get(); cin.get();
}

//------------MAIN MENU------------
int main() {
    int choice;

    do {
        cout << "Main Menu" << endl;
        cout << "1 - Final Average" << endl;
        cout << "2 - Positive Negative" << endl;
        cout << "3 - Odd Even" << endl;
        cout << "4 - Greatest Number" << endl;
        cout << "5 - Smallest Number" << endl;
        cout << "6 - Average Grade" << endl;
        cout << "7 - Temperature" << endl;
        cout << "8 - Total Sales" << endl;
        cout << "9 - Days in a Week" << endl;
        cout << "10 - Letters" << endl;
        cout << "11 - Exit" << endl;

        cout << "Enter your Choice: "; cin >> choice;

        switch (choice) {
            case 1: {
                float p, m, f;
                cout << "Enter PRELIM, MIDTERM, FINAL Grades: ";
                cin >> p >> m >> f;
                average(p, m, f); 
                break;
            }
            case 2: {
                float num;
                cout << "Enter a Number: "; cin >> num;
                posneg(num); 
                break;
            }
            case 3: {
                int num;
                cout << "Enter a Number: "; cin >> num;
                oddeven(num); 
                break;
            }
            case 4: {
                float n1, n2;
                cout << "Enter two Numbers: "; cin >> n1 >> n2;
                findgreater(n1, n2); 
                break;
            }
            case 5: {
                int n1, n2, n3;
                cout << "Enter three Numbers: "; cin >> n1 >> n2 >> n3;
                smallest(n1, n2, n3); 
                break;
            }
            case 6: {
                float p, m, f;
                cout << "Enter PRELIM, MIDTERM, FINAL Grades: ";
                cin >> p >> m >> f;
                grade(p, m, f); 
                break;
            }
            case 7: {
                float t;
                cout << "Enter Temperature: "; cin >> t;
                temp(t); 
                break;
            }
            case 8: {
                float s;
                cout << "Enter Sales: "; cin >> s;
                sales(s); 
                break;
            }
            case 9: {
                int d;
                cout << "Enter Day Number (1-7): "; cin >> d;
                day(d); 
                break;
            }
            case 10: {
                char l;
                cout << "Enter a Letter: "; cin >> l;
                letters(l); 
                break;
            }
            case 11: exit(0);
            default: cout << "Invalid Input" << endl;
        }

    } while (choice != 11);

    return 0;
}