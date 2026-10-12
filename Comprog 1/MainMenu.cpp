#include <iostream>
using namespace std;

//Function Declaration
void printname(void);
void swap(void);
void sum(void);
void celsius(void);
void totalsale(void);
void average(void);
void cubenumber(void);
void rectangle(void);
void circle(void);
void triangle(void);

//Functions
//CASE 1
void printname() {//printname
    for (int i=0; i<5; i++ ){//start of for loop
        cout<<"Chad"<<endl;}//end of for loop
    }//printname

//CASE 2
void swap(){//swap
    int a=10, b=5, temp=a;

    temp=a;
    a=b;
    b=temp;

        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b;
}//swap

//CASE 3
void sum(){//sum
    int num1, num2;

        cout<<"Enter 1st Number: ";
        cin>>num1;

        cout<<"Enter 2nd Number: ";
        cin>>num2;

        cout<<"Sum = "<<num1 + num2<<endl;
        cout<<"Difference = "<<num1 - num2<<endl;
        cout<<"Product = "<<num1 * num2<<endl;
        cout<<"Quotient = "<<num1 / num2<<endl;
}//sum

//CASE 4
void celsius(){//celsius
    float celsius, fahrenheit;

        cout<<"Enter Temperature in Celsius: ";
        cin>>celsius;

    fahrenheit = (9/5)*celsius;

        cout<<"Temperature in Fahrenheit: "<<fahrenheit;
}//celsius

//CASE 5
void totalsale(){//totalsale
    float sman_number, unit_sold, unit_price, total_sale;
    char sman_name [50];

        cout<<"Enter Salesman Number: ";
        cin>>sman_number;

        cout<<"Enter Salesman Name: ";
        cin>>sman_name;

        cout<<"Enter Unit Sold: ";
        cin>>unit_sold;

        cout<<"Enter Unit Price: ";
        cin>>unit_price;

    total_sale = unit_sold + unit_price;

        cout<<"The Total Sale is: "<<total_sale;
}//totalsale

//CASE 6
void average(){//average
    float prelim, midterm, final, average;

        cout<<"Enter PRELIM Grades: ";
        cin>>prelim;

        cout<<"Enter MIDTERM Grades: ";
        cin>>midterm;

        cout<<"Enter FINAL Grades: ";
        cin>>final;

    average = (prelim + midterm + final)/3;

        cout<<"Average Grades: "<<average;
}//average

//CASE 7
void cubenumber(){//cubenumber
    int num1, sqr, cube;

        cout<<"Enter a Number: ";
        cin>>num1;

    sqr = num1 * num1;
    cube = num1 * num1 * num1;

        cout<<"The Square of the Number is : "<<sqr<<endl;
        cout<<"The Cube of the Number is: "<<cube;
}//cubenumber

//CASE 8
void rectangle(){//rectangle
    float length, width, area, perimeter;

        cout<<"Enter the Length: ";
        cin>>length;

        cout<<"Enter the Width: ";
        cin>>width;

    area = length * width;
    perimeter = 2 * (length + width);
        
        cout<<"The Area of the Rectangle is: "<<area<<endl;
        cout<<"The Perimeter of the Rectangle is: "<<perimeter;
}//rectangle

//CASE 9
void circle(){//circle
    float dia, area, circum;

        cout<<"Enter the Diameter: ";
        cin>>dia;

    area = 3.1416 * (dia/2) * (dia/2);
    circum = 3.1416 * dia;

        cout<<"The Area of the Circle is: "<<area<<endl;
        cout<<"The Circumference of the Circle is: ";
}//circle

//CASE 10
void triangle(){//triangle
    float base, height, side1, side2, side3, area, perimeter;

        cout<<"Enter the Base: ";
        cin>>base;

        cout<<"Enter the Height: ";
        cin>>height;

        cout<<"Enter 1st Side: ";
        cin>>side1;

        cout<<"Enter 2nd Side: ";
        cin>>side2;

        cout<<"Enter 3rd Side: ";
        cin>>side3;

    area = 1/2 * base * height;
    perimeter = side1 + side2 +side3;

        cout<<"The Area of the Triangle is: "<<area<<endl;
        cout<<"THe Perimeter of the Triangle is: ";
}//triangle

//Main Menu Interface
int main()
{//start of main function
    int choice;
    
    do {//start of do
        cout<<"Main Menu"<<endl;
        cout<<"1. Print Name"<<endl;
        cout<<"2. Swap Number"<<endl;
        cout<<"3. Sum, Difference, Product, Quotient"<<endl;
        cout<<"4. Celsius to Fahrenheit"<<endl;
        cout<<"5. Total Sales"<<endl;
        cout<<"6. Average Grades"<<endl;
        cout<<"7. Cube & Square of a Number"<<endl;
        cout<<"8. Area & Perimeter of a Rectangle"<<endl;
        cout<<"9. Area & Circumference of a Circle"<<endl;
        cout<<"10. Area & Perimeter of a Triangle"<<endl;
        cout<<"11. Exit Main Menu"<<endl;
        cout<<"Enter your Choice: ";
        cin>>choice;
    
    switch(choice){//start of switch
        
        case 1: printname(); break;
        case 2: swap(); break;
        case 3: sum();  break;
        case 4: celsius(); break;
        case 5: totalsale(); break;
        case 6: average(); break;
        case 7: cubenumber(); break;
        case 8: rectangle(); break;
        case 9: circle(); break;    
        case 10: triangle(); break;
        case 11: exit(0);
        
    default:
        cout<<"Invalid Input";
    }//end of switch


    cin.ignore();//removes any newline left in the function
    cin.get();//console pause

        }while (choice != 11);//end of do
    return 0;
}//end of main function