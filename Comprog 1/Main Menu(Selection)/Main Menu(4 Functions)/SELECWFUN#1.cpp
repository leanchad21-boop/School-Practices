#include <iostream>
#include <cstring>
using namespace std;
//NO ARGUMENT, NO RETURN VALUE
//------------FUNCTION DECLARATION------------
void average();
void posneg();
void oddeven();
void findgreater();
void smallest();
void grade();
void temp();
void sales();
void day();
void letters();

//------------FUNCTION------------
void average(){
float prelim,midterm,final,average;
char remarks[10];

    cout<<"Enter PRELIM Grade: ";cin>>prelim;
    cout<<"Enter MIDTERM Grade: ";cin>>midterm;
    cout<<"Enter FINAL Grade: ";cin>>final;

    average=(prelim+midterm+final)/3;

if (average >=75)
    cout<<"Passed!";

else
    cout<<"Failed!";

    cout<<"PRELIM: "<<prelim<<endl;
    cout<<"MIDTERM: "<<midterm<<endl;
    cout<<"FINAL: "<<final<<endl;
    cout<<"AVERAGE: "<<average<<endl;
    cout<<"REMARKS: "<<remarks;

cin.get(); cin.get();
}

void posneg(){
float num;

    cout<<"Enter a NUMBER: ";cin>>num;


if (num==0) 
    cout<<"The Number is Neutral";
     
else if (num>0) 
    cout<<"The Number is Positive";
     
else 
    cout<<"The Number is Negative";  
  
cin.get(); cin.get();
}

void oddeven(){
int num;

cout<<"Enter a NUMBER: ";cin>>num;

if (num==0) 
    cout<<"The Number is NEUTRAL";
     
else if (num%2==0) 
    cout<<"The Number is EVEN";
     
else 
    cout<<"The Number is ODD";
        
cin.get(); cin.get();
}

void findgreater(){
float n1,n2;

    cout<<"Enter the First Number: ";cin>>n1;
    cout<<"Enter the Second Number: ";cin>>n2;

if (n1>n2) 
    cout<<n1<<" is greater than "<<n2;
     
else 
    cout<<n2<<" is greater than "<<n1;  
}

void smallest(){
int n1,n2,n3;


    cout<<"Enter the First Number: ";cin>>n1;
    cout<<"Enter the Second Number: ";cin>>n2;
    cout<<"Enter the Third Number: ";cin>>n3;


if (n1<=n2 && n1<=n3) 
    cout<<n1<<" is the smallest number";
     
else if (n2<=n1 && n2<=n3) 
    cout<<n2<<" is the smallest number";
     
else
    cout<<n3<<" is the smallest number";
    
cin.get(); cin.get();
}

void grade(){
float p, m, f, ave;

    cout<<"Enter PRELIM Grade: ";cin>>p;
    cout<<"Enter MIDTERM Grade: ";cin>>m;
    cout<<"Enter FINAL Grade: ";cin>>f;

ave = (p + m + f) / 3;
    cout<<"AVERAGE: "<<ave<<endl;

if (ave < 0 || ave > 100)
    cout<<"Invalid Grade";
else if (ave >= 97) 
    cout<<"Grade equivalent: 1.0";
else if (ave >= 94) 
    cout<<"Grade equivalent: 1.25";
else if (ave >= 91) 
    cout<<"Grade equivalent: 1.5";
else if (ave >= 88) 
    cout<<"Grade equivalent: 1.75";
else if (ave >= 86) 
    cout<<"Grade equivalent: 2.0";
else if (ave >= 82) 
    cout<<"Grade equivalent: 2.25";
else if (ave >= 79) 
    cout<<"Grade equivalent: 2.5";
else if (ave >= 76) 
    cout<<"Grade equivalent: 2.75";
else if (ave >= 75) 
    cout<<"Grade equivalent: 3.0";
else 
    cout<<"Grade equivalent: 5.0";
    
cin.get(); cin.get();
}

void temp(){
float temp;

    cout<<"Enter the Temperature: ";cin>>temp;

if (temp<0) 
    cout<<"Freezing Weather"; 

else if (temp<10) 
    cout<<"Very Cold Weather"; 


else if (temp<20) 
    cout<<"Cold Weather"; 


else if (temp<30) 
    cout<<"Normal Temperature"; 

else if (temp<40) 
    cout<<"Hot"; 

else 
    cout<<"Very Hot"; 
        
cin.get(); cin.get();
}

void sales(){
float sales,commission;

    cout<<"Enter the amount of Sales: ";cin>>sales;

if (sales<=15000) 
    commission=sales*0.15 ; 

else if (sales<=20000) 
    commission=sales*0.20 ; 

else if (sales<=25000) 
    commission=sales*0.25 ; 

else if (sales<=30000) 
    commission=sales*0.30 ; 

else 
    commission=sales*0.40 ; 
    
    cout<<"Commission= "<<commission;
        
cin.get(); cin.get();
}

void day(){
float day;

    cout<<"Enter the Day: ";cin>>day;

if (day==1) 
    cout<<"Sunday"; 

else if (day==2) 
    cout<<"Monday"; 

else if (day==3) 
    cout<<"Tuesday"; 

else if (day==4) 
    cout<<"Wednesday"; 

else if (day==5) 
    cout<<"Thursday"; 

else if (day==6) 
    cout<<"Friday"; 

else if (day==7) 
    cout<<"Saturday"; 

else 
    cout<<"Invalid"; 
        
cin.get(); cin.get();
}

void letters(){

char letter;

    cout<<"Enter a Letter; ";cin>>letter;

if (strchr("aeiouAEIOU",letter)) 
    cout<<"Vowel"; 

else 
    cout<<"Consonant"; 
        
cin.get(); cin.get();
}

//------------MAIN MENU------------

int main (){//start of MAIN

int choice;

    do {//start of DO
    cout<<"Main Menu"<<endl;
    cout<<"1 - Final Average"<<endl;
    cout<<"2 - Positive Negative"<<endl;
    cout<<"3 - Odd Even"<<endl;
    cout<<"4 - Greatest Number"<<endl;
    cout<<"5 - Smallest Number"<<endl;
    cout<<"6 - Average Grade"<<endl;
    cout<<"7 - Temperature"<<endl;
    cout<<"8 - Total Sales"<<endl;
    cout<<"9 - Days in a Week"<<endl;
    cout<<"10 - Letters"<<endl;
    cout<<"11 - Exit"<<endl;

        cout<<"Enter your Choice: ";cin>>choice;
    
    switch (choice){//start of SWITCH
        case 1: average(); break;
        case 2: posneg(); break;
        case 3: oddeven(); break;
        case 4: findgreater(); break;
        case 5: smallest(); break;
        case 6: grade(); break;
        case 7: temp(); break;
        case 8: sales(); break;
        case 9: day(); break;
        case 10: letters(); break;
        case 11: exit(0);

        default:
            cout<<"Invalid Input";
        }//start of SWITCH
    }//end of DO
    
        while (choice !=11);

}//end of MAIN