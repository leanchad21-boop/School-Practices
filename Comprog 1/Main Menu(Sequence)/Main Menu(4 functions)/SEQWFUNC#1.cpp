#include <iostream>
using namespace std;
//NO ARGUMENT, NO RETURN VALUE
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

void printname()
{
    cout<<"Chad"<<endl;
    cout<<"Chad"<<endl;
    cout<<"Chad"<<endl;
    cout<<"Chad"<<endl;
    cout<<"Chad";
    cin.get(); cin.get();   // replaces getch()
}

void swapnum()
{
    int a = 10, b = 5, temp;

    temp = a;
    a = b;
    b = temp;

    cout<<"After Swap:"<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b;
    cin.get(); cin.get();
}

void operations()
{
    int x, y;

    cout<<"Enter x: ";
    cin>>x;
    cout<<"Enter y: ";
    cin>>y;

    cout<<"Sum: "<<x + y<<endl;
    cout<<"Difference: "<<x - y<<endl;
    cout<<"Product: "<<x * y<<endl;
    cout<<"Quotient: "<<x / y;
    cin.get(); cin.get();
}

void ctof()
{
    float c, f;

    cout<<"Enter Temperature in Celsius: ";
    cin>>c;

    f = (9.0/5.0)*c + 32;

    cout<<"Temperature in Fahrenheit: "<<f;
    cin.get(); cin.get();
}

void totalsales()
{
    float Salesnum, Unitsold, Unitprice, Totalsales;
    char Salesname[50];

    cout<<"Enter Sales Name: ";
    cin>>Salesname;
    cout<<"Enter Sales Number: ";
    cin>>Salesnum;
    cout<<"Units Sold: ";
    cin>>Unitsold;
    cout<<"Unit Price: ";
    cin>>Unitprice;

    Totalsales = Unitsold * Unitprice;

    cout<<"Total Sales: "<<Totalsales;
    cin.get(); cin.get();
}

void averagegrade()
{
    float prelim, midterm, finalg, average;

    cout<<"Enter PRELIM Grade: ";
    cin>>prelim;
    cout<<"Enter MIDTERM Grade: ";
    cin>>midterm;
    cout<<"Enter FINAL Grade: ";
    cin>>finalg;

    average = (prelim + midterm + finalg) / 3;

    cout<<"General Average: "<<average;
    cin.get(); cin.get();
}

void squarecube()
{
    float a, sqr, cube;

    cout<<"Enter a number: ";
    cin>>a;

    sqr = a * a;
    cube = a * a * a;

    cout<<"Square = "<<sqr<<endl;
    cout<<"Cube = "<<cube;
    cin.get(); cin.get();
}

void rect()
{
    float length, width, area, perimeter;

    cout<<"Enter LENGTH: ";
    cin>>length;
    cout<<"Enter WIDTH: ";
    cin>>width;

    area = length * width;
    perimeter = 2 * (length + width);

    cout<<"AREA = "<<area<<endl;
    cout<<"PERIMETER = "<<perimeter;
    cin.get(); cin.get();
}

void circle()
{
    float diameter, area, circum;

    cout<<"Enter DIAMETER: ";
    cin>>diameter;

    area = 3.1416 * (diameter / 2) * (diameter / 2);
    circum = 3.1416 * diameter;

    cout<<"AREA = "<<area<<endl;
    cout<<"CIRCUMFERENCE = "<<circum;
    cin.get(); cin.get();
}

void trianglecalc()
{
    float base, height, s1, s2, s3, area, perimeter;

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
            case 2: swapnum(); break;
            case 3: operations(); break;
            case 4: ctof(); break;
            case 5: totalsales(); break;
            case 6: averagegrade(); break;
            case 7: squarecube(); break;
            case 8: rect(); break;
            case 9: circle(); break;
            case 10: trianglecalc(); break;
            case 11: exit(0);

            default:
                cout<<"Invalid Input!";
                cin.get(); cin.get();
        }

    } while (choice != 11);
}
