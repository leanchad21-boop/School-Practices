#include <iostream>
using namespace std;

//NO ARGUMENT, NO RETURN VALUE

//------------FUNCTION DECLARATION------------
void name();
void Afive();
void Nfive();
void NandM();
void oddsum();
void factorial();
void sum();
void fibonacci();
void prime();
void binary();

//------------FUNCTION------------

void name() { 

int a = 1;
char input[20];

while (a <= 5) {
    cout << "Type \"chadpogi\": ";cin >> input;
    // increment a
    a = a + 1; }

    cout << "Loop finished. Program stopping.";

cin.get(); cin.get();
}

void Afive(){
int a = 1;

while (a <= 5) {
    cout << a << endl;
    a = a + 1;
}
cin.get(); cin.get();
}

void Nfive(){
int a = 1, N;
    cout << "Enter N: ";cin >> N;

while (a <= N) {
    if (a % 2 == 0)
        cout << a << endl;
        a = a + 1;
    }
cin.get(); cin.get();
}

void NandM(){
int N, M;

    cout << "Enter N: ";cin >> N;
    cout << "Enter M: ";cin >> M;

while (N <= M) {
    if (N % 2 == 0)
        cout << N << endl;
        N = N + 1;
    }
cin.get(); cin.get();
}

void oddsum(){
int N, M, Sum = 0;

    cout << "Enter N: ";cin >> N;
    cout << "Enter M: ";cin >> M;


while (N <= M) {
    if (N % 2 != 0)
        Sum = Sum + N;
        N = N + 1;
    }
    cout << "Sum of odd numbers = " << Sum;

cin.get(); cin.get();
}

void factorial(){
int N, X = 1, Y = 1;
    cout << "Enter N: ";
    cin >> N;


while (X <= N) {
    Y = Y * X;
    X = X + 1;
    }
    cout << "Factorial = " << Y;

cin.get(); cin.get();
}

void sum(){
int X, Sum = 0, Y;
    cout << "Enter number: ";
    cin >> X;


while (X > 0) {
    Y = X % 10;
    Sum = Sum + Y;
    X = X / 10;}

    cout << "Sum of digits = " << Sum;

cin.get(); cin.get();
}

void fibonacci(){
int n;
    cout << "Enter n: ";cin >> n;

int a = 0, b = 1, c = 1;
    cout << a << endl;


while (c <= n) {
    cout << b << endl;

int x = a + b;
    a = b;
    b = x;
    c = c + 1;
    }
cin.get(); cin.get();
}

void prime(){
int n, x = 2, isPrime = 1;
    cout << "Enter number: ";
    cin >> n;


while (x < n) {
    if (n % x == 0) {
        isPrime = 0;
        break;}
    x = x + 1;
    }

    if (isPrime)
        cout << "Prime";
    else
        cout << "Not Prime";

cin.get(); cin.get();
}

void binary(){
int n, i = 1, b = 0, r;
    cout << "Enter decimal number: ";
    cin >> n;

while (n > 0) {
    r = n % 2;
    b = b + r * i;
    i = i * 10;
    n = n / 2;
    }

    cout << "Binary = " << b;

cin.get(); cin.get();
}

//------------MAIN MENU------------

int main (){//start of MAIN

int choice;

    do {//start of DO
    cout<<"Main Menu"<<endl;
    cout<<"1 - Print name"<<endl;
    cout<<"2 - Print five times"<<endl;
    cout<<"3 - Print N (5x)"<<endl;
    cout<<"4 - Odd in Between"<<endl;
    cout<<"5 - Sum of Odd"<<endl;
    cout<<"6 - Factorial"<<endl;
    cout<<"7 - Sum of Number"<<endl;
    cout<<"8 - Total of Number"<<endl;
    cout<<"9 - Prime Number"<<endl;
    cout<<"10 - Binary number"<<endl;
    cout<<"11 - Exit"<<endl;

        cout<<"Enter your Choice: ";cin>>choice;
    
    switch (choice){//start of SWITCH
        case 1: name(); break;
        case 2: Afive(); break;
        case 3: Nfive(); break;
        case 4: NandM(); break;
        case 5: oddsum(); break;
        case 6: factorial(); break;
        case 7: sum(); break;
        case 8: fibonacci(); break;
        case 9: prime(); break;
        case 10: binary(); break;
        case 11: exit(0);

        default:
            cout<<"Invalid Input";
        }//start of SWITCH
    }//end of DO
    
        while (choice !=11);

}//end of MAIN