#include <iostream>
using namespace std;

//Function Declaration
void failpass(void);
void positive(void);
void oddeven(void);
void largest(void);
void smallest(void);
void average(void);
void temp(void);
void sales(void);
void day(void);
void letter(void);

//Functions
//CASE 1
void failpass(void){//failpass
    float ave, prelim, midterm, final;
    
        cout<<"Enter PRELIM Grades: ";cin>>prelim;

        cout<<"Enter MIDTERM Grades:";cin>>midterm;

        cout<<"Enter FINAL Grades: ";cin>>final;

    ave = (prelim + midterm+ final)/3;

    if (ave>=75)
        cout<<"Passed";

    else 
        cout<<"Failed";
}//failpass

//CASE 2
void positive(void){//positive
    int num1;

        cout<<"Enter a Number: ";cin>>num1;

    if (num1==0)
        cout<<"The number is Neutral";

    else if (num1>0)
        {cout<<"The number is Positive";}

    else
        cout<<"Negative";
}//positive

//CASE 3
void oddeven(void){//oddeven
    int num1;

        cout<<"Enter a Number: ";cin>>num1;

    if (num1==0)
        cout<<"The number is Neutral";

    else if (num1%2==0)
        {cout<<"The number is Even"}
    
    else
        cout<<"The number is Odd";
}//oddeven

//CASE 4
void largest(void){//largest
    int num1, num2;

        cout<<"Enter the 1st Number: ";cin>>num1;

        cout<<"Enter the 2nd Number: ";cin>>num2;

    if (num1>num2)
        cout<<num1<<" is greater than "<<num2;

    else
        cout<<num2<<" is greater than "<<num1;
}//largest

//CASE 5
void smallest(void){//smallest
    int num1, num2, num3;

        cout<<"Enter the 1st Number: ";cin>>num1;

        cout<<"Enter the 2nd Number: ";cin>>num2;

        cout<<"Enter the 3rd Number: ";cin>>num3;

    if (num1<=num2 && num1<=num3)
        cout<<num1<<" is the smallest number";
    
    else if (num2<=num1 && num2<=num3)
        {cout<<num2<<" is the smallest number"}
        
    else
        cout<<num3<<" is the smallest number";
}//smallest

//CASE 6
void average(void){//average
    float ave, prelim, midterm, final;

        cout<<"Enter PRELIM Grades: ";cin>>prelim;

        cout<<"Enter MIDTERM Grades: ";cin>>midterm;

        cout<<"Enter FINA: Grades: ";cin>>final;

    ave = (prelim + midterm + final)/3;

    int limits []= {97, 94, 91, 88, 85, 82, 79, 76, 75};
    string grades[]= {"1.0","1.25","1.5","1.75","2.0","2.25","2.5","2.75","3.0"};

    if (average > 100 && average < 0){cout<<"Invalid Output";}

    for (int i = 0; i < 9; i++){//start of for
        if (ave>=limits[i]){cout<<grades[i];}
    }//end of for
        cout<<"5.0";
}//average

//CASE 7
void temp(void){//temp
    float temp;

        cout<<"Enter the Temperature in Celsius: ";cin>>temp;

    int limits[] = {}

}//temp