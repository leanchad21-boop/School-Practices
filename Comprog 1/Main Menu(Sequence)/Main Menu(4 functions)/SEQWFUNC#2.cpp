#include <iostream>
using namespace std;
//WITH ARGUMENT, NO RETURN VALUE
/* ------------------ FUNCTION DECLARATIONS ------------------ */
void printname();
void swapnum();
void operations();
void ctof();
void totalsales();
void averagegrade();
void squarecube();
void rect();
void circle();
void trianglecalc();

/* ------------------ FUNCTIONS ------------------ */

void printname(void)
{
    cout<<"Chad"<<endl;
    cout<<"Chad"<<endl;
    cout<<"Chad"<<endl;
    cout<<"Chad"<<endl;
    cout<<"Chad";
    cin.get(); cin.get();   // replaces getch()
}

void swapnum(int a, int b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;

    cout<<"After Swap:"<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b;
    cin.get(); cin.get();
}

void operations(int x, int y)
{

    cout<<"Sum: "<<x + y<<endl;
    cout<<"Difference: "<<x - y<<endl;
    cout<<"Product: "<<x * y<<endl;
    cout<<"Quotient: "<<x / y;
    cin.get(); cin.get();
}

void ctof(float c)
{

    float f = (9.0/5.0)*c + 32; 

    cout<<"Temperature in Fahrenheit: "<<f;
    cin.get(); cin.get();
}

void totalsales(float Salesnum, float Unitsold, float Unitprice, char Salesname[])
{
    float Totalsales;

    Totalsales = Unitsold * Unitprice;

    cout<<"Total Sales: "<<Totalsales;
    cin.get(); cin.get();
}

void averagegrade(float prelim, float midterm, float finalg)
{
    float average;

    average = (prelim + midterm + finalg) / 3;

    cout<<"General Average: "<<average;
    cin.get(); cin.get();
}

void squarecube(float a)
{
    float sqr, cube;

    sqr = a * a;
    cube = a * a * a;

    cout<<"Square = "<<sqr<<endl;
    cout<<"Cube = "<<cube;
    cin.get(); cin.get();
}

void rect(float length, float width)
{
    float area, perimeter;

    area = length * width;
    perimeter = 2 * (length + width);

    cout<<"AREA = "<<area<<endl;
    cout<<"PERIMETER = "<<perimeter;
    cin.get(); cin.get();
}

void circle(float diameter)
{
    float area, circum;

    area = 3.1416 * (diameter / 2) * (diameter / 2);
    circum = 3.1416 * diameter;

    cout<<"AREA = "<<area<<endl;
    cout<<"CIRCUMFERENCE = "<<circum;
    cin.get(); cin.get();
}

void trianglecalc(float base, float height, float s1, float s2, float s3)
{
    float area, perimeter;

    area = 0.5 * base * height;
    perimeter = s1 + s2 + s3;

    cout<<"AREA = "<<area<<endl;
    cout<<"PERIMETER = "<<perimeter;
    cin.get(); cin.get();
}

/* ------------------ MAIN MENU ------------------ */

int main()
{
    int choice;

    do {
        cout<<"Main Menu"<<endl;
        cout<<"1 - Print Name"<<endl;
        cout<<"2 - Swap"<<endl;
        cout<<"3 - Sum, Difference, Product, Quotient"<<endl;
        cout<<"4 - Celsius to Fahrenheit"<<endl;
        cout<<"5 - Total Sales"<<endl;
        cout<<"6 - Average Grade"<<endl;
        cout<<"7 - Square and Cube"<<endl;
        cout<<"8 - Area and Perimeter of Rectangle"<<endl;
        cout<<"9 - Area and Circumference of Circle"<<endl;
        cout<<"10 - Area and Perimeter of Triangle"<<endl;
        cout<<"11 - Exit"<<endl;

        cout<<"Enter your Choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1: printname(); break;
            case 2: swapnum(10, 5); break;
            case 3: 
                int x, y;
                    cout<<"Enter x: ";
                    cin>>x;
                    cout<<"Enter y: ";
                    cin>>y;
                operations(x,y);
                break;
            

            case 4: 
                float c;
                    cout<<"Enter Temperature in Celsius: ";
                    cin>>c;
                ctof(c); 
                break;
            
        
            case 5: 
                float Salesnum, Unitsold, Unitprice;
                char Salesname[50];
        
                cout<<"Enter Sales Name: ";
                cin>>Salesname;
                cout<<"Enter Sales Number: ";
                cin>>Salesnum;
                cout<<"Units Sold: ";
                cin>>Unitsold;
                cout<<"Unit Price: ";
                cin>>Unitprice;

                totalsales(Salesnum,Unitsold,Unitprice,Salesname); 
                break;
            

            case 6: 
            float prelim, midterm, finalg;

                cout<<"Enter PRELIM Grade: ";
                cin>>prelim;
                cout<<"Enter MIDTERM Grade: ";
                cin>>midterm;
                cout<<"Enter FINAL Grade: ";
                cin>>finalg;

            averagegrade(prelim, midterm, finalg); 
            break;

            case 7: 
            float a;

                cout<<"Enter a number: ";
                cin>>a;

            squarecube(a); 
            break;

            case 8: 
            float length, width;

                cout<<"Enter LENGTH: ";
                cin>>length;
                cout<<"Enter WIDTH: ";
                cin>>width;

            rect(length, width); 
            break;

            case 9: 
            float diameter;

                cout<<"Enter DIAMETER: ";
                cin>>diameter;
                
            circle(diameter); 
            break;

            case 10: 
            float base, height, s1, s2, s3;

                cout<<"Enter BASE: ";
                cin>>base;
                cout<<"Enter HEIGHT: ";
                cin>>height;
                cout<<"Enter SIDE 1: ";
                cin>>s1;
                cout<<"Enter SIDE 2: ";
                cin>>s2;
                cout<<"Enter SIDE 3: ";
                cin>>s3;

            trianglecalc(base, height, s1, s2, s3); 
            break;

            case 11: exit(0);

            default:
                cout<<"Invalid Input!";
                cin.get(); cin.get();
        }

    } while (choice != 11);
}
