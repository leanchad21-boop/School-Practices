#include <iostream>
using namespace std;

//WITH ARGUMENT, NO RETURN VALUE

//------------FUNCTION DECLARATION------------
void name(int count);
void Afive(int times);
void Nfive(int N);
void NandM(int N, int M);
void oddsum(int N, int M);
void factorial(int N);
void sum(int X);
void abc(int n);
void prime(int n);
void binary(int n);

//------------FUNCTION------------

void name(int count) { 
    int a = 1;
    char input[20];

    while (a <= count) {
        cout << "Type \"chadpogi\": "; cin >> input;
        a = a + 1; 
    }
    cout << "Loop finished. Program stopping.";
    cin.get(); cin.get();
}

void Afive(int times){
    int a = 1;

    while (a <= times) {
        cout << a << endl;
        a = a + 1;
    }
    cin.get(); cin.get();
}

void Nfive(int N){
    int a = 1;

    while (a <= N) {
        if (a % 2 == 0)
            cout << a << endl;
        a = a + 1;
    }
    cin.get(); cin.get();
}

void NandM(int N, int M){
    while (N <= M) {
        if (N % 2 == 0)
            cout << N << endl;
        N = N + 1;
    }
    cin.get(); cin.get();
}

void oddsum(int N, int M){
    int Sum = 0;

    while (N <= M) {
        if (N % 2 != 0)
            Sum = Sum + N;
        N = N + 1;
    }
    cout << "Sum of odd numbers = " << Sum;
    cin.get(); cin.get();
}

void factorial(int N){
    int X = 1, Y = 1;

    while (X <= N) {
        Y = Y * X;
        X = X + 1;
    }
    cout << "Factorial = " << Y;
    cin.get(); cin.get();
}

void sum(int X){
    int Sum = 0, Y;

    while (X > 0) {
        Y = X % 10;
        Sum = Sum + Y;
        X = X / 10;
    }
    cout << "Sum of digits = " << Sum;
    cin.get(); cin.get();
}

void abc(int n){
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

void prime(int n){
    int x = 2, isPrime = 1;

    while (x < n) {
        if (n % x == 0) {
            isPrime = 0;
            break;
        }
        x = x + 1;
    }

    if (isPrime)
        cout << "Prime";
    else
        cout << "Not Prime";

    cin.get(); cin.get();
}

void binary(int n){
    int i = 1, b = 0, r;

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
        cout<<"3 - Print N (even numbers)"<<endl;
        cout<<"4 - Even in Between N and M"<<endl;
        cout<<"5 - Sum of Odd"<<endl;
        cout<<"6 - Factorial"<<endl;
        cout<<"7 - Sum of Number"<<endl;
        cout<<"8 - Fibonacci Series"<<endl;
        cout<<"9 - Prime Number"<<endl;
        cout<<"10 - Binary number"<<endl;
        cout<<"11 - Exit"<<endl;

        cout<<"Enter your Choice: ";cin>>choice;

        switch (choice){//start of SWITCH
            case 1: { int count; cout << "How many times: "; cin >> count; name(count); break; }
            case 2: { int times; cout << "Enter times: "; cin >> times; Afive(times); break; }
            case 3: { int N; cout << "Enter N: "; cin >> N; Nfive(N); break; }
            case 4: { int N,M; cout << "Enter N: "; cin >> N; cout << "Enter M: "; cin >> M; NandM(N,M); break; }
            case 5: { int N,M; cout << "Enter N: "; cin >> N; cout << "Enter M: "; cin >> M; oddsum(N,M); break; }
            case 6: { int N; cout << "Enter N: "; cin >> N; factorial(N); break; }
            case 7: { int X; cout << "Enter number: "; cin >> X; sum(X); break; }
            case 8: { int n; cout << "Enter n: "; cin >> n; abc(n); break; }
            case 9: { int n; cout << "Enter number: "; cin >> n; prime(n); break; }
            case 10: { int n; cout << "Enter decimal number: "; cin >> n; binary(n); break; }
            case 11: exit(0);

            default:
                cout<<"Invalid Input"; cin.get(); cin.get();
        }//end of SWITCH
    }//end of DO
    while (choice !=11);

}//end of MAIN
