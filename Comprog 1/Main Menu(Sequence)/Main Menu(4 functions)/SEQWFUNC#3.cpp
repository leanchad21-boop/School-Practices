#include <iostream>
using namespace std;

//WITHOUT ARGUMENT, WITH RETURN VALUE
/* ------------------ FUNCTION DECLARATIONS ------------------ */
int printname();
int swapnum();
int operations();
float ctof();
float totalsales();
float averagegrade();
int squarecube();
float rect();
float circle();
float trianglecalc();

/* ------------------ FUNCTIONS ------------------ */

int printname()
{
    cout<<"Chad"<<endl;
    cout<<"Chad"<<endl;
    cout<<"Chad"<<endl;
    cout<<"Chad"<<endl;
    cout<<"Chad";
    cin.get(); cin.get();
    return 0;
}

int swapnum()
{
    int a = 10, b = 5, temp;

    temp = a;
    a = b;
    b = temp;

    cout<<"After Swap:"<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b;
    cin.get(); cin.get();
    return a;
}

int operations()
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
    return x + y;
}

float ctof()
{
    float c, f;

    cout<<"Enter Temperature in Celsius: ";
    cin>>c;

    f = (9.0/5.0)*c + 32;
    cout<<"Temperature in Fahrenheit: "<<f;
    cin.get(); cin.get();
    return f;
}

float totalsales()
{
    float Unitsold, Unitprice, Totalsales;
    char Salesname[50];

    cout<<"Enter Sales Name: ";
    cin>>Salesname;
    cout<<"Units Sold: ";
    cin>>Unitsold;
    cout<<"Unit Price: ";
    cin>>Unitprice;

    Totalsales = Unitsold * Unitprice;
    cout<<"Total Sales: "<<Totalsales;
    cin.get(); cin.get();
    return Totalsales;
}

float averagegrade()
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
    return average;
}

int squarecube()
{
    float a;

    cout<<"Enter a number: ";
    cin>>a;

    cout<<"Square = "<<a*a<<endl;
    cout<<"Cube = "<<a*a*a;
    cin.get(); cin.get();
    return a;
}

float rect()
{
    float length, width, area;

    cout<<"Enter LENGTH: ";
    cin>>length;
    cout<<"Enter WIDTH: ";
    cin>>width;

    area = length * width;
    cout<<"AREA = "<<area;
    cin.get(); cin.get();
    return area;
}

float circle()
{
    float diameter, area;

    cout<<"Enter DIAMETER: ";
    cin>>diameter;

    area = 3.1416 * (diameter / 2) * (diameter / 2);
    cout<<"AREA = "<<area;
    cin.get(); cin.get();
    return area;
}

float trianglecalc()
{
    float base, height, area;

    cout<<"Enter BASE: ";
    cin>>base;
    cout<<"Enter HEIGHT: ";
    cin>>height;

    area = 0.5 * base * height;
    cout<<"AREA = "<<area;
    cin.get(); cin.get();
    return area;
}

/* ------------------ MAIN MENU ------------------ */

int main()
{
    int choice;

    do {
        cout<<"\nMain Menu"<<endl;
        cout<<"1 - Print Name"<<endl;
        cout<<"2 - Swap"<<endl;
        cout<<"3 - Operations"<<endl;
        cout<<"4 - Celsius to Fahrenheit"<<endl;
        cout<<"5 - Total Sales"<<endl;
        cout<<"6 - Average Grade"<<endl;
        cout<<"7 - Square and Cube"<<endl;
        cout<<"8 - Rectangle"<<endl;
        cout<<"9 - Circle"<<endl;
        cout<<"10 - Triangle"<<endl;
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
            default: cout<<"Invalid Input!";
        }

    } while (choice != 11);
}
