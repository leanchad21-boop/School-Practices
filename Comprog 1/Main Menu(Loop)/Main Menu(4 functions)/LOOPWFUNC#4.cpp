#include <iostream>
using namespace std;

//WITH ARGUMENT, WITH RETURN VALUE

//------------FUNCTION DECLARATION------------
int name(int times);
int Afive(int limit);
int Nfive(int N);
int NandM(int N, int M);
int oddsum(int N, int M);
int factorial(int N);
int sum(int X);
int abc(int n);
int prime(int n);
int binary(int n);

//------------FUNCTION------------

int name(int times){
    int a = 1;
    char input[20];

    while (a <= times){
        cout<<"Type \"chadpogi\": ";
        cin>>input;
        a = a + 1;
    }
    cout<<"Loop finished. Program stopping.";
    cin.get(); cin.get();
    return 0;
}

int Afive(int limit){
    int a = 1;
    while (a <= limit){
        cout<<a<<endl;
        a = a + 1;
    }
    cin.get(); cin.get();
    return 0;
}

int Nfive(int N){
    int a = 1;
    while (a <= N){
        if (a % 2 == 0)
            cout<<a<<endl;
        a = a + 1;
    }
    cin.get(); cin.get();
    return 0;
}

int NandM(int N, int M){
    while (N <= M){
        if (N % 2 == 0)
            cout<<N<<endl;
        N = N + 1;
    }
    cin.get(); cin.get();
    return 0;
}

int oddsum(int N, int M){
    int Sum = 0;
    while (N <= M){
        if (N % 2 != 0)
            Sum = Sum + N;
        N = N + 1;
    }
    cin.get(); cin.get();
    return Sum;
}

int factorial(int N){
    int X = 1, Y = 1;
    while (X <= N){
        Y = Y * X;
        X = X + 1;
    }
    cin.get(); cin.get();
    return Y;
}

int sum(int X){
    int Sum = 0, Y;
    while (X > 0){
        Y = X % 10;
        Sum = Sum + Y;
        X = X / 10;
    }
    cin.get(); cin.get();
    return Sum;
}

int abc(int n){
    int a = 0, b = 1, c = 1;
    cout<<a<<endl;
    while (c <= n){
        cout<<b<<endl;
        int x = a + b;
        a = b;
        b = x;
        c = c + 1;
    }
    cin.get(); cin.get();
    return 0;
}

int prime(int n){
    int x = 2, isPrime = 1;
    while (x < n){
        if (n % x == 0){
            isPrime = 0;
            break;
        }
        x = x + 1;
    }
    cin.get(); cin.get();
    return isPrime;
}

int binary(int n){
    int i = 1, b = 0, r;
    while (n > 0){
        r = n % 2;
        b = b + r * i;
        i = i * 10;
        n = n / 2;
    }
    cin.get(); cin.get();
    return b;
}

//------------MAIN MENU------------
int main(){
    int choice;

    do{
        cout<<"Main Menu"<<endl;
        cout<<"1 - Print name"<<endl;
        cout<<"2 - Print five times"<<endl;
        cout<<"3 - Print N (even numbers)"<<endl;
        cout<<"4 - Even in Between"<<endl;
        cout<<"5 - Sum of Odd"<<endl;
        cout<<"6 - Factorial"<<endl;
        cout<<"7 - Sum of Digits"<<endl;
        cout<<"8 - Fibonacci"<<endl;
        cout<<"9 - Prime Number"<<endl;
        cout<<"10 - Binary Number"<<endl;
        cout<<"11 - Exit"<<endl;

        cout<<"Enter your Choice: ";
        cin>>choice;

        switch(choice){
            case 1:
                name(5);
                break;

            case 2:
                Afive(5);
                break;

            case 3:{
                int N;
                cout<<"Enter N: ";
                cin>>N;
                Nfive(N);
                break;
            }

            case 4:{
                int N, M;
                cout<<"Enter N: "; cin>>N;
                cout<<"Enter M: "; cin>>M;
                NandM(N, M);
                break;
            }

            case 5:{
                int N, M;
                cout<<"Enter N: "; cin>>N;
                cout<<"Enter M: "; cin>>M;
                cout<<"Sum of odd numbers = "<<oddsum(N, M);
                break;
            }

            case 6:{
                int N;
                cout<<"Enter N: "; cin>>N;
                cout<<"Factorial = "<<factorial(N);
                break;
            }

            case 7:{
                int X;
                cout<<"Enter number: ";
                cin>>X;
                cout<<"Sum of digits = "<<sum(X);
                break;
            }

            case 8:{
                int n;
                cout<<"Enter n: ";
                cin>>n;
                abc(n);
                break;
            }

            case 9:{
                int n;
                cout<<"Enter number: ";
                cin>>n;
                if (prime(n))
                    cout<<"Prime";
                else
                    cout<<"Not Prime";
                break;
            }

            case 10:{
                int n;
                cout<<"Enter decimal number: ";
                cin>>n;
                cout<<"Binary = "<<binary(n);
                break;
            }

            case 11:
                exit(0);

            default:
                cout<<"Invalid Input";
                cin.get(); cin.get();
        }

    }while(choice != 11);

}