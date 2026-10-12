#include <iostream>
#include <cstring>
using namespace std;

//WITH ARGUMENT, WITH RETURN VALUE
//------------FUNCTION DECLARATION------------
float average(float prelim, float midterm, float final);
char posneg(float num);
char oddeven(int num);
float findgreater(float n1, float n2);
int smallest(int n1, int n2, int n3);
float grade(float p, float m, float f);
char temp(float temperature);
float sales(float s);
int day(int d);
char letters(char l);

//------------FUNCTION------------
float average(float prelim, float midterm, float final){
    return (prelim + midterm + final) / 3;
}

char posneg(float num){
    if(num>0) return 'P';
    else return 'N';

cin.get(); cin.get();
}

char oddeven(int num){
    if(num%2==0) return 'E';
    else return 'O';

cin.get(); cin.get();
}

float findgreater(float n1, float n2){
    return (n1>n2) ? n1 : n2;

cin.get(); cin.get();
}

int smallest(int n1, int n2, int n3){
    if(n1<=n2 && n1<=n3) return n1;
    else if(n2<=n1 && n2<=n3) return n2;
    else return n3;

cin.get(); cin.get();
}

float grade(float p, float m, float f){
    float ave = (p + m + f) / 3;
    return ave;

cin.get(); cin.get();
}

char temp(float t){
    if(t<0) return 'F';
    else if(t<10) return 'V';
    else if(t<20) return 'C';
    else if(t<30) return 'N';
    else if(t<40) return 'H';
    else return 'X';

cin.get(); cin.get();
}

float sales(float s){
    if(s<=15000) return s*0.15;
    else if(s<=20000) return s*0.20;
    else if(s<=25000) return s*0.25;
    else if(s<=30000) return s*0.30;
    else return s*0.40;

cin.get(); cin.get();
}

int day(int d){
    return d; // main will handle printing

cin.get(); cin.get();
}

char letters(char l){
    if(strchr("aeiouAEIOU",l)) return 'V';
    else return 'C';

cin.get(); cin.get();
}

//------------MAIN MENU------------
int main (){
    int choice;

    do{
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

        cout<<"Enter your Choice: "; cin>>choice;

        switch(choice){
            case 1:{
            float p,m,f;
                cout<<"Enter PRELIM: "; cin>>p;
                cout<<"Enter MIDTERM: "; cin>>m;
                cout<<"Enter FINAL: "; cin>>f;
                
            float avg = average(p,m,f);
                cout<<"AVERAGE: "<<avg<<endl;
                if(avg>=75) cout<<"Passed!"<<endl;
                else cout<<"Failed!"<<endl;
                break;
            }
            case 2:{
            float num;
                cout<<"Enter a NUMBER: "; cin>>num;
                char res = posneg(num);
                if(res=='P') cout<<"Positive"<<endl;
                else cout<<"Negative"<<endl;
                break;
            }
            case 3:{
                int num;
                cout<<"Enter a NUMBER: "; cin>>num;
                char res = oddeven(num);
                if(res=='E') cout<<"EVEN"<<endl;
                else cout<<"ODD"<<endl;
                break;
            }
            case 4:{
                float n1,n2;
                cout<<"Enter the First Number: "; cin>>n1;
                cout<<"Enter the Second Number: "; cin>>n2;
                cout<<findgreater(n1,n2)<<" is greater"<<endl;
                break;
            }
            case 5:{
                int n1,n2,n3;
                cout<<"Enter the First Number: "; cin>>n1;
                cout<<"Enter the Second Number: "; cin>>n2;
                cout<<"Enter the Third Number: "; cin>>n3;
                cout<<smallest(n1,n2,n3)<<" is the smallest number"<<endl;
                break;
            }
            case 6:{
                float p,m,f;
                cout<<"Enter PRELIM: "; cin>>p;
                cout<<"Enter MIDTERM: "; cin>>m;
                cout<<"Enter FINAL: "; cin>>f;
                float ave = grade(p,m,f);
                cout<<"AVERAGE: "<<ave<<endl;
                if(ave < 0 || ave > 100) cout<<"Invalid Grade"<<endl;
                else if(ave>=97) cout<<"Grade equivalent: 1.0"<<endl;
                else if(ave>=94) cout<<"Grade equivalent: 1.25"<<endl;
                else if(ave>=91) cout<<"Grade equivalent: 1.5"<<endl;
                else if(ave>=88) cout<<"Grade equivalent: 1.75"<<endl;
                else if(ave>=86) cout<<"Grade equivalent: 2.0"<<endl;
                else if(ave>=82) cout<<"Grade equivalent: 2.25"<<endl;
                else if(ave>=79) cout<<"Grade equivalent: 2.5"<<endl;
                else if(ave>=76) cout<<"Grade equivalent: 2.75"<<endl;
                else if(ave>=75) cout<<"Grade equivalent: 3.0"<<endl;
                else cout<<"Grade equivalent: 5.0"<<endl;
                break;
            }
            case 7:{
                float t;
                cout<<"Enter Temperature: "; cin>>t;
                char res = temp(t);
                if(res=='F') cout<<"Freezing Weather"<<endl;
                else if(res=='V') cout<<"Very Cold Weather"<<endl;
                else if(res=='C') cout<<"Cold Weather"<<endl;
                else if(res=='N') cout<<"Normal Temperature"<<endl;
                else if(res=='H') cout<<"Hot"<<endl;
                else cout<<"Very Hot"<<endl;
                break;
            }
            case 8:{
                float s;
                cout<<"Enter Sales: "; cin>>s;
                cout<<"Commission= "<<sales(s)<<endl;
                break;
            }
            case 9:{
                int d;
                cout<<"Enter the Day: "; cin>>d;
                switch(d){
                    case 1: cout<<"Sunday"<<endl; break;
                    case 2: cout<<"Monday"<<endl; break;
                    case 3: cout<<"Tuesday"<<endl; break;
                    case 4: cout<<"Wednesday"<<endl; break;
                    case 5: cout<<"Thursday"<<endl; break;
                    case 6: cout<<"Friday"<<endl; break;
                    case 7: cout<<"Saturday"<<endl; break;
                    default: cout<<"Invalid"<<endl;
                }
                break;
            }
            case 10:{
                char l;
                cout<<"Enter a Letter: "; cin>>l;
                char res = letters(l);
                if(res=='V') cout<<"Vowel"<<endl;
                else cout<<"Consonant"<<endl;
                break;
            }
            case 11: exit(0);
            default: cout<<"Invalid Input"<<endl;
        }

    }while(choice!=11);

    return 0;
}
