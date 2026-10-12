#include <iostream>
using namespace std;

// WITH ARGUMENT, WITH RETURN VALUE
/* ------------------ FUNCTION DECLARATIONS ------------------ */
int printname(int x);
int swapnum(int a, int b);
int operations(int x, int y);
float ctof(float c);
float totalsales(float u, float p);
float averagegrade(float p, float m, float f);
float squarecube(float a);
float rect(float l, float w);
float circle(float d);
float trianglecalc(float b, float h);

/* ------------------ FUNCTIONS ------------------ */

int printname(int x)
{
    cout<<"Chad"<<endl;
    cout<<"Chad"<<endl;
    cout<<"Chad"<<endl;
    cout<<"Chad"<<endl;
    cout<<"Chad";
    cin.get(); cin.get();
    return x;
}

int swapnum(int a, int b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;

    cout<<"After Swap:"<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b;
    cin.get(); cin.get();
    return a;
}

int operations(int x, int y)
{
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

float ctof(float c)
{
    float f;

    cout<<"Enter Temperature in Celsius: ";
    cin>>c;

    f = (9.0/5.0)*c + 32;
    cout<<"Temperature in Fahrenheit: "<<f;
    cin.get(); cin.get();
    return f;
}

float totalsales(float u, float p)
{
    float Unitsold, Unitprice, Totalsales;

    cout<<"Units Sold: ";
    cin>>Unitsold;
    cout<<"Unit Price: ";
    cin>>Unitprice;

    Totalsales = Unitsold * Unitprice;
    cout<<"Total Sales: "<<Totalsales;
    cin.get(); cin.get();
    return Totalsales;
}

float averagegrade(float p, float m, float f)
{
    float average;

    cout<<"Enter PRELIM Grade: ";
    cin>>p;
    cout<<"Enter MIDTERM Grade: ";
    cin>>m;
    cout<<"Enter FINAL Grade: ";
    cin>>f;

    average = (p + m + f) / 3;
    cout<<"General Average: "<<average;
    cin.get(); cin.get();
    return average;
}

float squarecube(float a)
{
    cout<<"Enter a number: ";
    cin>>a;

    cout<<"Square = "<<a * a<<endl;
    cout<<"Cube = "<<a * a * a;
    cin.get(); cin.get();
    return a;
}

float rect(float l, float w)
{
    float area, perimeter;

    cout<<"Enter LENGTH: ";
    cin>>l;
    cout<<"Enter WIDTH: ";
    cin>>w;

    area = l * w;
    perimeter = 2 * (l + w);

    cout<<"AREA = "<<area<<endl;
    cout<<"PERIMETER = "<<perimeter;
    cin.get(); cin.get();
    return area;
}

float circle(float d)
{
    float area, circum;

    cout<<"Enter DIAMETER: ";
    cin>>d;

    area = 3.1416 * (d / 2) * (d / 2);
    circum = 3.1416 * d;

    cout<<"AREA = "<<area<<endl;
    cout<<"CIRCUMFERENCE = "<<circum;
    cin.get(); cin.get();
    return area;
}

float trianglecalc(float b, float h)
{
    float area, s1, s2, s3;

    cout<<"Enter BASE: ";
    cin>>b;
    cout<<"Enter HEIGHT: ";
    cin>>h;
    cout<<"Enter SIDE 1: ";
    cin>>s1;
    cout<<"Enter SIDE 2: ";
    cin>>s2;
    cout<<"Enter SIDE 3: ";
    cin>>s3;

    area = 0.5 * b * h;

    cout<<"AREA = "<<area<<endl;
    cout<<"PERIMETER = "<<s1 + s2 + s3;
    cin.get(); cin.get();
    return area;
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
            case 1: printname(0); break;
            case 2: swapnum(10,5); break;
            case 3: operations(0,0); break;
            case 4: ctof(0); break;
            case 5: totalsales(0,0); break;
            case 6: averagegrade(0,0,0); break;
            case 7: squarecube(0); break;
            case 8: rect(0,0); break;
            case 9: circle(0); break;
            case 10: trianglecalc(0,0); break;
            case 11: exit(0);
            default:
                cout<<"Invalid Input!";
                cin.get(); cin.get();
        }

    } while(choice != 11);
}
