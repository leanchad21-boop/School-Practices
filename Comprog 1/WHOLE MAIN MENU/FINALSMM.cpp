#include <iostream>
using namespace std;

//----------------------FUNCTIONS----------------------
//HOURS AND DIGIT (NO ARGUMENT, NO RETURN VALUE)
void hrsnmins(){
    int hrs, min, time;

        cout<<"Enter a Number: ";cin>>time;
    
    hrs = time/60;
    min = time%60;
        
        cout<<"There are "<<hrs<<"hours and "<<min<<"minutes";
cin.get(); cin.get();
}

//FIRST AND LAST DIGIT (NO ARGUMENT, YES RETURN VALUE)
int firstnlast(){
    int n; cin >> n;
     n = abs(n);
    
    int last = n % 10;
    int first = n;

    while (first >= 10) first /= 10;
        int sum = first + last;
        cout <<"The Sum is: "<< sum << endl;
return sum;
cin.get(); cin.get();
    }

//FACTORIAL (YES ARGUMENT, YES RETURN VALUE)
int factorial(int N){
    int X = 1, Y = 1;
    while (X <= N){
        Y = Y * X;
        X = X + 1;
    }
return Y;
cin.get(); cin.get();
}

//----------------------MAIN MENU----------------------
void mainmenu(){
    int choice;

    do {//start of do
        cout<<"Main Menu"<<endl;
        cout<<"1 - Time Converter"<<endl;
        cout<<"2 - Sum of digits"<<endl;
        cout<<"3 - Factorial of a Number"<<endl;
        cout<<"4 - Exit"<<endl;
        cout<<"Enter a number: ";cin>>choice;

    switch(choice){//start of switch
        case 1: hrsnmins(); break;
        case 2: firstnlast(); break;
        case 3:
            int N;
                cout<<"Enter N: "; cin>>N;
                cout<<"Factorial = "<<factorial(N);
                break;
        case 4: exit(0); break;

        default:
            cout<<"Invalid Input!";
    cin.get(); cin.get();
    }//end of switch

        }//end of do
    while (choice !=4);
}

int main(){
    mainmenu();
    return 0;
}

