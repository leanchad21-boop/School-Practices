#include <iostream>
#include <cstring>
using namespace std;

//-------------------SEQUENCE FUNCTIONS-------------------
//WITHOUT ARGUMENT, WITHOUT RETURN VALUE
void printnameseq1()
{
    cout<<"Chad"<<endl;
    cout<<"Chad"<<endl;
    cout<<"Chad"<<endl;
    cout<<"Chad"<<endl;
    cout<<"Chad";
    cin.get(); cin.get();   // replaces getch()
}

void swapnumseq1()
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

void operationsseq1()
{
    int x, y;

    cout<<"Enter x: ";cin>>x;
    cout<<"Enter y: ";cin>>y;

    cout<<"Sum: "<<x + y<<endl;
    cout<<"Difference: "<<x - y<<endl;
    cout<<"Product: "<<x * y<<endl;
    cout<<"Quotient: "<<x / y;
    cin.get(); cin.get();
}

void ctofseq1()
{
    float c, f;

    cout<<"Enter Temperature in Celsius: ";cin>>c;

    f = (9.0/5.0)*c + 32;

    cout<<"Temperature in Fahrenheit: "<<f;
    cin.get(); cin.get();
}

void totalsalesseq1()
{
    float Salesnum, Unitsold, Unitprice, Totalsales;
    char Salesname[50];

    cout<<"Enter Sales Name: ";cin>>Salesname;
    cout<<"Enter Sales Number: ";cin>>Salesnum;
    cout<<"Units Sold: ";cin>>Unitsold;
    cout<<"Unit Price: ";cin>>Unitprice;

    Totalsales = Unitsold * Unitprice;

    cout<<"Total Sales: "<<Totalsales;
    cin.get(); cin.get();
}

void averagegradeseq1()
{
    float prelim, midterm, finalg, average;

    cout<<"Enter PRELIM Grade: ";cin>>prelim;
    cout<<"Enter MIDTERM Grade: ";cin>>midterm;
    cout<<"Enter FINAL Grade: ";cin>>finalg;

    average = (prelim + midterm + finalg) / 3;

    cout<<"General Average: "<<average;
    cin.get(); cin.get();
}

void squarecubeseq1()
{
    float a, sqr, cube;

    cout<<"Enter a number: ";cin>>a;

    sqr = a * a;
    cube = a * a * a;

    cout<<"Square = "<<sqr<<endl;
    cout<<"Cube = "<<cube;
    cin.get(); cin.get();
}

void rectseq1()
{
    float length, width, area, perimeter;

    cout<<"Enter LENGTH: ";cin>>length;
    cout<<"Enter WIDTH: ";cin>>width;

    area = length * width;
    perimeter = 2 * (length + width);

    cout<<"AREA = "<<area<<endl;
    cout<<"PERIMETER = "<<perimeter;
    cin.get(); cin.get();
}

void circleseq1()
{
    float diameter, area, circum;

    cout<<"Enter DIAMETER: ";cin>>diameter;

    area = 3.1416 * (diameter / 2) * (diameter / 2);
    circum = 3.1416 * diameter;

    cout<<"AREA = "<<area<<endl;
    cout<<"CIRCUMFERENCE = "<<circum;
    cin.get(); cin.get();
}

void trianglecalcseq1()
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

//WITH ARGUMENT, WITHOUT RETURN VALUE
void printnameseq2(void)
{
    cout<<"Chad"<<endl;
    cout<<"Chad"<<endl;
    cout<<"Chad"<<endl;
    cout<<"Chad"<<endl;
    cout<<"Chad";
    cin.get(); cin.get();   // replaces getch()
}

void swapnumseq2(int a, int b)
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

void operationsseq2(int x, int y)
{

    cout<<"Sum: "<<x + y<<endl;
    cout<<"Difference: "<<x - y<<endl;
    cout<<"Product: "<<x * y<<endl;
    cout<<"Quotient: "<<x / y;
    cin.get(); cin.get();
}

void ctofseq2(float c)
{

    float f = (9.0/5.0)*c + 32; 

    cout<<"Temperature in Fahrenheit: "<<f;
    cin.get(); cin.get();
}

void totalsalesseq2(float Salesnum, float Unitsold, float Unitprice, char Salesname[])
{
    float Totalsales;

    Totalsales = Unitsold * Unitprice;

    cout<<"Total Sales: "<<Totalsales;
    cin.get(); cin.get();
}

void averagegradeseq2(float prelim, float midterm, float finalg)
{
    float average;

    average = (prelim + midterm + finalg) / 3;

    cout<<"General Average: "<<average;
    cin.get(); cin.get();
}

void squarecubeseq2(float a)
{
    float sqr, cube;

    sqr = a * a;
    cube = a * a * a;

    cout<<"Square = "<<sqr<<endl;
    cout<<"Cube = "<<cube;
    cin.get(); cin.get();
}

void rectseq2(float length, float width)
{
    float area, perimeter;

    area = length * width;
    perimeter = 2 * (length + width);

    cout<<"AREA = "<<area<<endl;
    cout<<"PERIMETER = "<<perimeter;
    cin.get(); cin.get();
}

void circleseq2(float diameter)
{
    float area, circum;

    area = 3.1416 * (diameter / 2) * (diameter / 2);
    circum = 3.1416 * diameter;

    cout<<"AREA = "<<area<<endl;
    cout<<"CIRCUMFERENCE = "<<circum;
    cin.get(); cin.get();
}

void trianglecalcseq2(float base, float height, float s1, float s2, float s3)
{
    float area, perimeter;

    area = 0.5 * base * height;
    perimeter = s1 + s2 + s3;

    cout<<"AREA = "<<area<<endl;
    cout<<"PERIMETER = "<<perimeter;
    cin.get(); cin.get();
}

//WITHOUT ARGUMENT, WITH RETURN VALUE
int printnameseq3()
{
    cout<<"Chad"<<endl;
    cout<<"Chad"<<endl;
    cout<<"Chad"<<endl;
    cout<<"Chad"<<endl;
    cout<<"Chad";
    cin.get(); cin.get();
    return 0;
}

int swapnumseq3()
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

int operationsseq3()
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

float ctofseq3()
{
    float c, f;

    cout<<"Enter Temperature in Celsius: ";
    cin>>c;

    f = (9.0/5.0)*c + 32;
    cout<<"Temperature in Fahrenheit: "<<f;
    cin.get(); cin.get();
    return f;
}

float totalsalesseq3()
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

float averagegradeseq3()
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

int squarecubeseq3()
{
    float a;

    cout<<"Enter a number: ";
    cin>>a;

    cout<<"Square = "<<a*a<<endl;
    cout<<"Cube = "<<a*a*a;
    cin.get(); cin.get();
    return a;
}

float rectseq3()
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

float circleseq3()
{
    float diameter, area;

    cout<<"Enter DIAMETER: ";
    cin>>diameter;

    area = 3.1416 * (diameter / 2) * (diameter / 2);
    cout<<"AREA = "<<area;
    cin.get(); cin.get();
    return area;
}

float trianglecalcseq3()
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

//WIHT ARGUMENT, WITH RETURN VALUE
int printnameseq4(int x)
{
    cout<<"Chad"<<endl;
    cout<<"Chad"<<endl;
    cout<<"Chad"<<endl;
    cout<<"Chad"<<endl;
    cout<<"Chad";
    cin.get(); cin.get();
    return x;
}

int swapnumseq4(int a, int b)
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

int operationsseq4(int x, int y)
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

float ctofseq4(float c)
{
    float f;

    cout<<"Enter Temperature in Celsius: ";
    cin>>c;

    f = (9.0/5.0)*c + 32;
    cout<<"Temperature in Fahrenheit: "<<f;
    cin.get(); cin.get();
    return f;
}

float totalsalesseq4(float u, float p)
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

float averagegradeseq4(float p, float m, float f)
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

float squarecubeseq4(float a)
{
    cout<<"Enter a number: ";
    cin>>a;

    cout<<"Square = "<<a * a<<endl;
    cout<<"Cube = "<<a * a * a;
    cin.get(); cin.get();
    return a;
}

float rectseq4(float l, float w)
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

float circleseq4(float d)
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

float trianglecalcseq4(float b, float h)
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

//-------------------SELECTION FUNCTIONS-------------------
//WITHOUT ARGUMENT, WITHOUT RETURN VALUE
void averagesel1(){
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

void posnegsel1(){
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

void oddevensel1(){
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

void findgreatersel1(){
float n1,n2;

    cout<<"Enter the First Number: ";cin>>n1;
    cout<<"Enter the Second Number: ";cin>>n2;

if (n1>n2) 
    cout<<n1<<" is greater than "<<n2;
     
else 
    cout<<n2<<" is greater than "<<n1;  
}

void smallestsel1(){
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

void gradesel1(){
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

void tempsel1(){
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

void salessel1(){
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

void daysel1(){
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

void letterssel1(){

char letter;

    cout<<"Enter a Letter; ";cin>>letter;

if (strchr("aeiouAEIOU",letter)) 
    cout<<"Vowel"; 

else 
    cout<<"Consonant"; 
        
cin.get(); cin.get();
}

//WITH ARGUMENT, WITHOUT RETURN VALUE
void averagesel2(float prelim, float midterm, float final){
    float avg = (prelim + midterm + final) / 3;
    char remarks[10];

    if (avg >= 75)
        cout << "Passed!";
    else
        cout << "Failed!";

    cout << "\nPRELIM: " << prelim << endl;
    cout << "MIDTERM: " << midterm << endl;
    cout << "FINAL: " << final << endl;
    cout << "AVERAGE: " << avg << endl;
    cout << "REMARKS: " << remarks << endl;

cin.get(); cin.get();
}

void posnegsel2(float num){
    if (num == 0)
        cout << "The Number is Neutral";
    else if (num > 0)
        cout << "The Number is Positive";
    else
        cout << "The Number is Negative";

    cout << endl;

cin.get(); cin.get();
}

void oddevensel2(int num){
    if (num == 0)
        cout << "The Number is NEUTRAL";
    else if (num % 2 == 0)
        cout << "The Number is EVEN";
    else
        cout << "The Number is ODD";

    cout << endl;

cin.get(); cin.get();
}

void findgreatersel2(float n1, float n2){
    if (n1 > n2)
        cout << n1 << " is greater than " << n2;
    else
        cout << n2 << " is greater than " << n1;

    cout << endl;

cin.get(); cin.get();
}

void smallestsel2(int n1, int n2, int n3){
    if (n1 <= n2 && n1 <= n3)
        cout << n1 << " is the smallest number";
    else if (n2 <= n1 && n2 <= n3)
        cout << n2 << " is the smallest number";
    else
        cout << n3 << " is the smallest number";

    cout << endl;

cin.get(); cin.get();
}

void gradesel2(float p, float m, float f){
    float ave = (p + m + f) / 3;
    cout << "AVERAGE: " << ave << endl;

    if (ave < 0 || ave > 100)
        cout << "Invalid Grade";
    else if (ave >= 97)
        cout << "Grade equivalent: 1.0";
    else if (ave >= 94)
        cout << "Grade equivalent: 1.25";
    else if (ave >= 91)
        cout << "Grade equivalent: 1.5";
    else if (ave >= 88)
        cout << "Grade equivalent: 1.75";
    else if (ave >= 86)
        cout << "Grade equivalent: 2.0";
    else if (ave >= 82)
        cout << "Grade equivalent: 2.25";
    else if (ave >= 79)
        cout << "Grade equivalent: 2.5";
    else if (ave >= 76)
        cout << "Grade equivalent: 2.75";
    else if (ave >= 75)
        cout << "Grade equivalent: 3.0";
    else
        cout << "Grade equivalent: 5.0";

    cout << endl;

cin.get(); cin.get();
}

void tempsel2(float temperature){
    if (temperature < 0)
        cout << "Freezing Weather";
    else if (temperature < 10)
        cout << "Very Cold Weather";
    else if (temperature < 20)
        cout << "Cold Weather";
    else if (temperature < 30)
        cout << "Normal Temperature";
    else if (temperature < 40)
        cout << "Hot";
    else
        cout << "Very Hot";

    cout << endl;

cin.get(); cin.get();
}

void salessel2(float sales){
    float commission;

    if (sales <= 15000)
        commission = sales * 0.15;
    else if (sales <= 20000)
        commission = sales * 0.20;
    else if (sales <= 25000)
        commission = sales * 0.25;
    else if (sales <= 30000)
        commission = sales * 0.30;
    else
        commission = sales * 0.40;

    cout << "Commission= " << commission << endl;

cin.get(); cin.get();
}

void daysel2(int d){
    if (d == 1) cout << "Sunday";
    else if (d == 2) cout << "Monday";
    else if (d == 3) cout << "Tuesday";
    else if (d == 4) cout << "Wednesday";
    else if (d == 5) cout << "Thursday";
    else if (d == 6) cout << "Friday";
    else if (d == 7) cout << "Saturday";
    else cout << "Invalid";

    cout << endl;

cin.get(); cin.get();
}

void letterssel2(char letter){
    if (strchr("aeiouAEIOU", letter))
        cout << "Vowel";
    else
        cout << "Consonant";

    cout << endl;

cin.get(); cin.get();
}

//WITHOUT ARGUMENT, WITH RETURN VALUE
float averagesel3(){
    float prelim, midterm, final;
    cout << "Enter PRELIM Grade: "; cin >> prelim;
    cout << "Enter MIDTERM Grade: "; cin >> midterm;
    cout << "Enter FINAL Grade: "; cin >> final;

    return (prelim + midterm + final) / 3;

cin.get(); cin.get();
}

char posnegsel3(){
    float num;
    cout << "Enter a Number: "; cin >> num;

    if(num > 0) return 'P';
    else return 'N';

cin.get(); cin.get();
}

char oddevensel3(){
    int num;
    cout << "Enter a Number: "; cin >> num;

    if(num % 2 == 0) return 'E';
    else return 'O';

cin.get(); cin.get();
}

float findgreatersel3(){
    float n1, n2;
    cout << "Enter the First Number: "; cin >> n1;
    cout << "Enter the Second Number: "; cin >> n2;

    return (n1 > n2) ? n1 : n2;

cin.get(); cin.get();
}

int smallestsel3(){
    int n1, n2, n3;
    cout << "Enter three Numbers: "; cin >> n1 >> n2 >> n3;

    if(n1 <= n2 && n1 <= n3) return n1;
    else if(n2 <= n1 && n2 <= n3) return n2;
    else return n3;

cin.get(); cin.get();
}

float gradesel3(){
    float p, m, f, ave;
    cout << "Enter PRELIM, MIDTERM, FINAL Grades: "; cin >> p >> m >> f;
    ave = (p + m + f) / 3;
    return ave;

cin.get(); cin.get();
}

char tempsel3(){
    float t;
    cout << "Enter Temperature: "; cin >> t;

    if(t < 0) return 'F';    // Freezing
    else if(t < 10) return 'V'; // Very Cold
    else if(t < 20) return 'C'; // Cold
    else if(t < 30) return 'N'; // Normal
    else if(t < 40) return 'H'; // Hot
    else return 'X';             // Very Hot

cin.get(); cin.get();
}

float salessel3(){
    float s;
    cout << "Enter Sales: "; cin >> s;

    if(s <= 15000) return s*0.15;
    else if(s <= 20000) return s*0.20;
    else if(s <= 25000) return s*0.25;
    else if(s <= 30000) return s*0.30;
    else return s*0.40;

cin.get(); cin.get();
}

int daysel3(){
    int d;
    cout << "Enter Day Number (1-7): "; cin >> d;
    return d;

cin.get(); cin.get();
}

char letterssel3(){
    char l;
    cout << "Enter a Letter: "; cin >> l;

    if(strchr("aeiouAEIOU", l)) return 'V';
    else return 'C';

cin.get(); cin.get();
}

//WITH ARGUMENT, WITH RETURN VALUE
float averagesel4(float prelim, float midterm, float final){
    return (prelim + midterm + final) / 3;
}

char posnegsel4(float num){
    if(num>0) return 'P';
    else return 'N';

cin.get(); cin.get();
}

char oddevensel4(int num){
    if(num%2==0) return 'E';
    else return 'O';

cin.get(); cin.get();
}

float findgreatersel4(float n1, float n2){
    return (n1>n2) ? n1 : n2;

cin.get(); cin.get();
}

int smallestsel4(int n1, int n2, int n3){
    if(n1<=n2 && n1<=n3) return n1;
    else if(n2<=n1 && n2<=n3) return n2;
    else return n3;

cin.get(); cin.get();
}

float gradesel4(float p, float m, float f){
    float ave = (p + m + f) / 3;
    return ave;

cin.get(); cin.get();
}

char tempsel4(float t){
    if(t<0) return 'F';
    else if(t<10) return 'V';
    else if(t<20) return 'C';
    else if(t<30) return 'N';
    else if(t<40) return 'H';
    else return 'X';

cin.get(); cin.get();
}

float salessel4(float s){
    if(s<=15000) return s*0.15;
    else if(s<=20000) return s*0.20;
    else if(s<=25000) return s*0.25;
    else if(s<=30000) return s*0.30;
    else return s*0.40;

cin.get(); cin.get();
}

int daysel4(int d){
    return d; // main will handle printing

cin.get(); cin.get();
}

char letterssel4(char l){
    if(strchr("aeiouAEIOU",l)) return 'V';
    else return 'C';

cin.get(); cin.get();
}

//-------------------LOOP FUNCTIONS-------------------
//WITHOUT ARGUMENT, WITHOUT RETURN VALUE
void nameloop1() { 

int a = 1;
char input[20];

while (a <= 5) {
    cout << "Type \"chadpogi\": ";cin >> input;
    // increment a
    a = a + 1; }

    cout << "Loop finished. Program stopping.";

cin.get(); cin.get();
}

void Afiveloop1(){
int a = 1;

while (a <= 5) {
    cout << a << endl;
    a = a + 1;
}
cin.get(); cin.get();
}

void Nfiveloop1(){
int a = 1, N;
    cout << "Enter N: ";cin >> N;

while (a <= N) {
    if (a % 2 == 0)
        cout << a << endl;
        a = a + 1;
    }
cin.get(); cin.get();
}

void NandMloop1(){
int N, M;

    cout << "Enter N: ";cin >> N;
    cout << "Enter M: ";cin >> M;

while (N <= M) {
    if (N % 2 == 0)
        cout << N << endl;
        N = N + 1;
    }
cin.get(); cin.get();
}

void oddsumloop1(){
int N, M, Sum = 0;

    cout << "Enter N: ";cin >> N;
    cout << "Enter M: ";cin >> M;


while (N <= M) {
    if (N % 2 != 0)
        Sum = Sum + N;  
        N = N + 1;
    }
    cout << "Sum of odd numbers = " << Sum;

cin.get(); cin.get();
}

void factorialloop1(){
int N, X = 1, Y = 1;
    cout << "Enter N: ";
    cin >> N;


while (X <= N) {
    Y = Y * X;
    X = X + 1;
    }
    cout << "Factorial = " << Y;

cin.get(); cin.get();
}

void sumloop1(){
int X, Sum = 0, Y;
    cout << "Enter number: ";
    cin >> X;


while (X > 0) {
    Y = X % 10;
    Sum = Sum + Y;
    X = X / 10;}

    cout << "Sum of digits = " << Sum;

cin.get(); cin.get();
}

void fibonacciloop1(){
int n;
    cout << "Enter n: ";cin >> n;

int a = 0, b = 1, c = 1;
    cout << a << endl;


while (c <= n) {
    cout << b << endl;

int x = a + b;
    a = b;
    b = x;
    c = c + 1;
    }
cin.get(); cin.get();
}

void primeloop1(){
int n, x = 2, isPrime = 1;
    cout << "Enter number: ";
    cin >> n;


while (x < n) {
    if (n % x == 0) {
        isPrime = 0;
        break;}
    x = x + 1;
    }

    if (isPrime)
        cout << "Prime";
    else
        cout << "Not Prime";

cin.get(); cin.get();
}

void binaryloop1(){
int n, i = 1, b = 0, r;
    cout << "Enter decimal number: ";
    cin >> n;

while (n > 0) {
    r = n % 2;
    b = b + r * i;
    i = i * 10;
    n = n / 2;
    }

    cout << "Binary = " << b;

cin.get(); cin.get();
}

//WITH ARGUMENT, WITHOUT RETURN VALUE
void nameloop2(int count) { 
    int a = 1;
    char input[20];

    while (a <= count) {
        cout << "Type \"chadpogi\": "; cin >> input;
        a = a + 1; 
    }
    cout << "Loop finished. Program stopping.";
    cin.get(); cin.get();
}

void Afiveloop2(int times){
    int a = 1;

    while (a <= times) {
        cout << a << endl;
        a = a + 1;
    }
    cin.get(); cin.get();
}

void Nfiveloop2(int N){
    int a = 1;

    while (a <= N) {
        if (a % 2 == 0)
            cout << a << endl;
        a = a + 1;
    }
    cin.get(); cin.get();
}

void NandMloop2(int N, int M){
    while (N <= M) {
        if (N % 2 == 0)
            cout << N << endl;
        N = N + 1;
    }
    cin.get(); cin.get();
}

void oddsumloop2(int N, int M){
    int Sum = 0;

    while (N <= M) {
        if (N % 2 != 0)
            Sum = Sum + N;
        N = N + 1;
    }
    cout << "Sum of odd numbers = " << Sum;
    cin.get(); cin.get();
}

void factorialloop2(int N){
    int X = 1, Y = 1;

    while (X <= N) {
        Y = Y * X;
        X = X + 1;
    }
    cout << "Factorial = " << Y;
    cin.get(); cin.get();
}

void sumloop2(int X){
    int Sum = 0, Y;

    while (X > 0) {
        Y = X % 10;
        Sum = Sum + Y;
        X = X / 10;
    }
    cout << "Sum of digits = " << Sum;
    cin.get(); cin.get();
}

void abcloop2(int n){
    int a = 0, b = 1, c = 1;
    cout << a << endl;

    while (c <= n) {
        cout << b << endl;
        int x = a + b;
        a = b;
        b = x;
        c = c + 1;
    }
    cin.get(); cin.get();
}

void primeloop2(int n){
    int x = 2, isPrime = 1;

    while (x < n) {
        if (n % x == 0) {
            isPrime = 0;
            break;
        }
        x = x + 1;
    }

    if (isPrime)
        cout << "Prime";
    else
        cout << "Not Prime";

    cin.get(); cin.get();
}

void binaryloop2(int n){
    int i = 1, b = 0, r;

    while (n > 0) {
        r = n % 2;
        b = b + r * i;
        i = i * 10;
        n = n / 2;
    }
    cout << "Binary = " << b;
    cin.get(); cin.get();
}

//WITHOUT ARGUMENT, WITH RETURN VALUE
int nameloop3() { 
    int a = 1;
    char input[20];

    while (a <= 5) {
        cout << "Type \"chadpogi\": "; cin >> input;
        a = a + 1; 
    }
    cout << "Loop finished. Program stopping.";
    cin.get(); cin.get();
    return 0; // just a dummy return
}

int Afiveloop3(){
    int a = 1;
    while (a <= 5) {
        cout << a << endl;
        a = a + 1;
    }
    cin.get(); cin.get();
    return 0;
}

int Nfiveloop3(){
    int a = 1, N;
    cout << "Enter N: "; cin >> N;
    while (a <= N) {
        if (a % 2 == 0)
            cout << a << endl;
        a = a + 1;
    }
    cin.get(); cin.get();
    return 0;
}

int NandMloop3(){
    int N, M;
    cout << "Enter N: "; cin >> N;
    cout << "Enter M: "; cin >> M;
    while (N <= M) {
        if (N % 2 == 0)
            cout << N << endl;
        N = N + 1;
    }
    cin.get(); cin.get();
    return 0;
}

int oddsumloop3(){
    int N, M, Sum = 0;
    cout << "Enter N: "; cin >> N;
    cout << "Enter M: "; cin >> M;
    while (N <= M) {
        if (N % 2 != 0)
            Sum = Sum + N;
        N = N + 1;
    }
    cout << "Sum of odd numbers = " << Sum;
    cin.get(); cin.get();
    return Sum;
}

int factorialloop3(){
    int N, X = 1, Y = 1;
    cout << "Enter N: "; cin >> N;
    while (X <= N) {
        Y = Y * X;
        X = X + 1;
    }
    cout << "Factorial = " << Y;
    cin.get(); cin.get();
    return Y;
}

int sumloop3(){
    int X, Sum = 0, Y;
    cout << "Enter number: "; cin >> X;
    while (X > 0) {
        Y = X % 10;
        Sum = Sum + Y;
        X = X / 10;
    }
    cout << "Sum of digits = " << Sum;
    cin.get(); cin.get();
    return Sum;
}

int abcloop3(){
    int n;
    cout << "Enter n: "; cin >> n;
    int a = 0, b = 1, c = 1;
    cout << a << endl;
    while (c <= n) {
        cout << b << endl;
        int x = a + b;
        a = b;
        b = x;
        c = c + 1;
    }
    cin.get(); cin.get();
    return 0; // Fibonacci series does not return a single value
}

int primeloop3(){
    int n, x = 2, isPrime = 1;
    cout << "Enter number: "; cin >> n;
    while (x < n) {
        if (n % x == 0) {
            isPrime = 0;
            break;
        }
        x = x + 1;
    }
    if (isPrime)
        cout << "Prime";
    else
        cout << "Not Prime";
    cin.get(); cin.get();
    return isPrime;
}

int binaryloop3(){
    int n, i = 1, b = 0, r;
    cout << "Enter decimal number: "; cin >> n;
    while (n > 0) {
        r = n % 2;
        b = b + r * i;
        i = i * 10;
        n = n / 2;
    }
    cout << "Binary = " << b;
    cin.get(); cin.get();
    return b;
}

//WITH ARGUMENT, WITH RETURN VALUE
int nameloop4(int times){
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

int Afiveloop4(int limit){
    int a = 1;
    while (a <= limit){
        cout<<a<<endl;
        a = a + 1;
    }
    cin.get(); cin.get();
    return 0;
}

int Nfiveloop4(int N){
    int a = 1;
    while (a <= N){
        if (a % 2 == 0)
            cout<<a<<endl;
        a = a + 1;
    }
    cin.get(); cin.get();
    return 0;
}

int NandMloop4(int N, int M){
    while (N <= M){
        if (N % 2 == 0)
            cout<<N<<endl;
        N = N + 1;
    }
    cin.get(); cin.get();
    return 0;
}

int oddsumloop4(int N, int M){
    int Sum = 0;
    while (N <= M){
        if (N % 2 != 0)
            Sum = Sum + N;
        N = N + 1;
    }
    cin.get(); cin.get();
    return Sum;
}

int factorialloop4(int N){
    int X = 1, Y = 1;
    while (X <= N){
        Y = Y * X;
        X = X + 1;
    }
    cin.get(); cin.get();
    return Y;
}

int sumloop4(int X){
    int Sum = 0, Y;
    while (X > 0){
        Y = X % 10;
        Sum = Sum + Y;
        X = X / 10;
    }
    cin.get(); cin.get();
    return Sum;
}

int abcloop4(int n){
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

int primeloop4(int n){
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

int binaryloop4(int n){
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

//-------------------SEQUENCE MAIN MENU-------------------

//WITHOUT ARGUMENT, WITHOUT RETURN VALUE
int mainseq1()
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
            case 1: printnameseq1(); break;
            case 2: swapnumseq1(); break;
            case 3: operationsseq1(); break;
            case 4: ctofseq1(); break;
            case 5: totalsalesseq1(); break;
            case 6: averagegradeseq1(); break;
            case 7: squarecubeseq1(); break;
            case 8: rectseq1(); break;
            case 9: circleseq1(); break;
            case 10: trianglecalcseq1(); break;
            case 11: exit(0);

            default:
                cout<<"Invalid Input!";
                cin.get(); cin.get();
        }

    } while (choice != 11);
}

//WITH ARGUMENT, WITHOUT RETURN VALUE
int mainseq2()
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
            case 1: printnameseq2(); break;
            case 2: swapnumseq2(10, 5); break;
            case 3: 
                int x, y;
                    cout<<"Enter x: ";
                    cin>>x;
                    cout<<"Enter y: ";
                    cin>>y;
                operationsseq2(x,y);
                break;
            

            case 4: 
                float c;
                    cout<<"Enter Temperature in Celsius: ";
                    cin>>c;
                ctofseq2(c); 
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

                totalsalesseq2(Salesnum,Unitsold,Unitprice,Salesname); 
                break;
            

            case 6: 
            float prelim, midterm, finalg;

                cout<<"Enter PRELIM Grade: ";
                cin>>prelim;
                cout<<"Enter MIDTERM Grade: ";
                cin>>midterm;
                cout<<"Enter FINAL Grade: ";
                cin>>finalg;

            averagegradeseq2(prelim, midterm, finalg); 
            break;

            case 7: 
            float a;

                cout<<"Enter a number: ";
                cin>>a;

            squarecubeseq2(a); 
            break;

            case 8: 
            float length, width;

                cout<<"Enter LENGTH: ";
                cin>>length;
                cout<<"Enter WIDTH: ";
                cin>>width;

            rectseq2(length, width); 
            break;

            case 9: 
            float diameter;

                cout<<"Enter DIAMETER: ";
                cin>>diameter;
                
            circleseq2(diameter); 
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

            trianglecalcseq2(base, height, s1, s2, s3); 
            break;

            case 11: exit(0);

            default:
                cout<<"Invalid Input!";
                cin.get(); cin.get();
        }

    } while (choice != 11);
}

//WITHOUT ARGUMENT, WITH RETURN VALUE
int mainseq3()
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
            case 1: printnameseq3(); break;
            case 2: swapnumseq3(); break;
            case 3: operationsseq3(); break;
            case 4: ctofseq3(); break;
            case 5: totalsalesseq3(); break;
            case 6: averagegradeseq3(); break;
            case 7: squarecubeseq3(); break;
            case 8: rectseq3(); break;
            case 9: circleseq3(); break;
            case 10: trianglecalcseq3(); break;
            case 11: exit(0);
            default: cout<<"Invalid Input!";
        }

    } while (choice != 11);
}

//WITH ARGUMENT, WITH RETURN VALUE
int mainseq4()
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
            case 1: printnameseq4(0); break;
            case 2: swapnumseq4(10,5); break;
            case 3: operationsseq4(0,0); break;
            case 4: ctofseq4(0); break;
            case 5: totalsalesseq4(0,0); break;
            case 6: averagegradeseq4(0,0,0); break;
            case 7: squarecubeseq4(0); break;
            case 8: rectseq4(0,0); break;
            case 9: circleseq4(0); break;
            case 10: trianglecalcseq4(0,0); break;
            case 11: exit(0);
            default:
                cout<<"Invalid Input!";
                cin.get(); cin.get();
        }

    } while(choice != 11);
}

//-------------------SELECTION MAIN MENU-------------------
//WITHOUT ARGUMENT, WITHOUT RETURN VALUE
int mainsel1 (){//start of MAIN

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
        case 1: averagesel1(); break;
        case 2: posnegsel1(); break;
        case 3: oddevensel1(); break;
        case 4: findgreatersel1(); break;
        case 5: smallestsel1(); break;
        case 6: gradesel1(); break;
        case 7: tempsel1(); break;
        case 8: salessel1(); break;
        case 9: daysel1(); break;
        case 10: letterssel1(); break;
        case 11: exit(0);

        default:
            cout<<"Invalid Input";
        }//start of SWITCH
    }//end of DO
    
        while (choice !=11);

}//end of MAIN

//WITH ARGUMENT, WITHOUT RETURN VALUE
int mainsel2() {
    int choice;

    do {
        cout << "Main Menu" << endl;
        cout << "1 - Final Average" << endl;
        cout << "2 - Positive Negative" << endl;
        cout << "3 - Odd Even" << endl;
        cout << "4 - Greatest Number" << endl;
        cout << "5 - Smallest Number" << endl;
        cout << "6 - Average Grade" << endl;
        cout << "7 - Temperature" << endl;
        cout << "8 - Total Sales" << endl;
        cout << "9 - Days in a Week" << endl;
        cout << "10 - Letters" << endl;
        cout << "11 - Exit" << endl;

        cout << "Enter your Choice: "; cin >> choice;

        switch (choice) {
            case 1: {
                float p, m, f;
                cout << "Enter PRELIM, MIDTERM, FINAL Grades: ";
                cin >> p >> m >> f;
                averagesel2(p, m, f); 
                break;
            }
            case 2: {
                float num;
                cout << "Enter a Number: "; cin >> num;
                posnegsel2(num); 
                break;
            }
            case 3: {
                int num;
                cout << "Enter a Number: "; cin >> num;
                oddevensel2(num); 
                break;
            }
            case 4: {
                float n1, n2;
                cout << "Enter two Numbers: "; cin >> n1 >> n2;
                findgreatersel2(n1, n2); 
                break;
            }
            case 5: {
                int n1, n2, n3;
                cout << "Enter three Numbers: "; cin >> n1 >> n2 >> n3;
                smallestsel2(n1, n2, n3); 
                break;
            }
            case 6: {
                float p, m, f;
                cout << "Enter PRELIM, MIDTERM, FINAL Grades: ";
                cin >> p >> m >> f;
                gradesel2(p, m, f); 
                break;
            }
            case 7: {
                float t;
                cout << "Enter Temperature: "; cin >> t;
                tempsel2(t); 
                break;
            }
            case 8: {
                float s;
                cout << "Enter Sales: "; cin >> s;
                salessel2(s); 
                break;
            }
            case 9: {
                int d;
                cout << "Enter Day Number (1-7): "; cin >> d;
                daysel2(d); 
                break;
            }
            case 10: {
                char l;
                cout << "Enter a Letter: "; cin >> l;
                letterssel2(l); 
                break;
            }
            case 11: exit(0);
            default: cout << "Invalid Input" << endl;
        }

    } while (choice != 11);

    return 0;
}

//WITHOUT ARGUMENT, WITH RETURN VALUE
int mainsel3(){
    int choice;

    do{
        cout << "\nMain Menu\n";
        cout << "1 - Final Average\n2 - Positive Negative\n3 - Odd Even\n4 - Greatest Number\n";
        cout << "5 - Smallest Number\n6 - Average Grade\n7 - Temperature\n8 - Total Sales\n";
        cout << "9 - Days in a Week\n10 - Letters\n11 - Exit\n";
        cout << "Enter your Choice: "; cin >> choice;

        switch(choice){
            case 1:{
                float avg = averagesel3();
                cout << "AVERAGE: " << avg << endl;
                if(avg >= 75) cout << "Passed!" << endl;
                else cout << "Failed!" << endl;
                break;
            }
            case 2:{
                char res = posnegsel3();
                if(res=='P') cout << "Positive" << endl;
                else cout << "Negative" << endl;
                break;
            }
            case 3:{
                char res = oddevensel3();
                if(res=='E') cout << "EVEN" << endl;
                else cout << "ODD" << endl;
                break;
            }
            case 4:{
                float g = findgreatersel3();
                cout << g << " is greater" << endl;
                break;
            }
            case 5:{
                int s = smallestsel3();
                cout << s << " is the smallest number" << endl;
                break;
            }
            case 6:{
                float ave = gradesel3();
                cout << "AVERAGE: " << ave << endl;
                if(ave < 0 || ave > 100) cout << "Invalid Grade" << endl;
                else if(ave >= 97) cout << "Grade equivalent: 1.0" << endl;
                else if(ave >= 94) cout << "Grade equivalent: 1.25" << endl;
                else if(ave >= 91) cout << "Grade equivalent: 1.5" << endl;
                else if(ave >= 88) cout << "Grade equivalent: 1.75" << endl;
                else if(ave >= 86) cout << "Grade equivalent: 2.0" << endl;
                else if(ave >= 82) cout << "Grade equivalent: 2.25" << endl;
                else if(ave >= 79) cout << "Grade equivalent: 2.5" << endl;
                else if(ave >= 76) cout << "Grade equivalent: 2.75" << endl;
                else if(ave >= 75) cout << "Grade equivalent: 3.0" << endl;
                else cout << "Grade equivalent: 5.0" << endl;
                break;
            }
            case 7:{
                char res = tempsel3();
                if(res=='F') cout << "Freezing Weather" << endl;
                else if(res=='V') cout << "Very Cold Weather" << endl;
                else if(res=='C') cout << "Cold Weather" << endl;
                else if(res=='N') cout << "Normal Temperature" << endl;
                else if(res=='H') cout << "Hot" << endl;
                else cout << "Very Hot" << endl;
                break;
            }
            case 8:{
                float c = salessel3();
                cout << "Commission= " << c << endl;
                break;
            }
            case 9:{
                int d = daysel3();
                switch(d){
                    case 1: cout << "Sunday" << endl; break;
                    case 2: cout << "Monday" << endl; break;
                    case 3: cout << "Tuesday" << endl; break;
                    case 4: cout << "Wednesday" << endl; break;
                    case 5: cout << "Thursday" << endl; break;
                    case 6: cout << "Friday" << endl; break;
                    case 7: cout << "Saturday" << endl; break;
                    default: cout << "Invalid" << endl;
                }
                break;
            }
            case 10:{
                char res = letterssel3();
                if(res=='V') cout << "Vowel" << endl;
                else cout << "Consonant" << endl;
                break;
            }
            case 11: exit(0);
            default: cout << "Invalid Input" << endl;
        }

    } while(choice != 11);

    return 0;
}

//WITH ARGUMENT, WITH RETURN VALUE
//------------MAIN MENU------------
int mainsel4 (){
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
                
            float avg = averagesel4(p,m,f);
                cout<<"AVERAGE: "<<avg<<endl;
                if(avg>=75) cout<<"Passed!"<<endl;
                else cout<<"Failed!"<<endl;
                break;
            }
            case 2:{
            float num;
                cout<<"Enter a NUMBER: "; cin>>num;
                char res = posnegsel4(num);
                if(res=='P') cout<<"Positive"<<endl;
                else cout<<"Negative"<<endl;
                break;
            }
            case 3:{
                int num;
                cout<<"Enter a NUMBER: "; cin>>num;
                char res = oddevensel4(num);
                if(res=='E') cout<<"EVEN"<<endl;
                else cout<<"ODD"<<endl;
                break;
            }
            case 4:{
                float n1,n2;
                cout<<"Enter the First Number: "; cin>>n1;
                cout<<"Enter the Second Number: "; cin>>n2;
                cout<<findgreatersel4(n1,n2)<<" is greater"<<endl;
                break;
            }
            case 5:{
                int n1,n2,n3;
                cout<<"Enter the First Number: "; cin>>n1;
                cout<<"Enter the Second Number: "; cin>>n2;
                cout<<"Enter the Third Number: "; cin>>n3;
                cout<<smallestsel4(n1,n2,n3)<<" is the smallest number"<<endl;
                break;
            }
            case 6:{
                float p,m,f;
                cout<<"Enter PRELIM: "; cin>>p;
                cout<<"Enter MIDTERM: "; cin>>m;
                cout<<"Enter FINAL: "; cin>>f;
                float ave = gradesel4(p,m,f);
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
                char res = tempsel4(t);
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
                cout<<"Commission= "<<salessel4(s)<<endl;
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
                char res = letterssel4(l);
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

//-------------------LOOP MAIN MENU-------------------

//WITHOUT ARGUMENT, WITHOUT RETURN VALUE
int mainloop1 (){//start of MAIN

int choice;

    do {//start of DO
    cout<<"Main Menu"<<endl;
    cout<<"1 - Print name"<<endl;
    cout<<"2 - Print five times"<<endl;
    cout<<"3 - Print N (5x)"<<endl;
    cout<<"4 - Odd in Between"<<endl;
    cout<<"5 - Sum of Odd"<<endl;
    cout<<"6 - Factorial"<<endl;
    cout<<"7 - Sum of Number"<<endl;
    cout<<"8 - Total of Number"<<endl;
    cout<<"9 - Prime Number"<<endl;
    cout<<"10 - Binary number"<<endl;
    cout<<"11 - Exit"<<endl;

        cout<<"Enter your Choice: ";cin>>choice;
    
    switch (choice){//start of SWITCH
        case 1: nameloop1(); break;
        case 2: Afiveloop1(); break;
        case 3: Nfiveloop1(); break;
        case 4: NandMloop1(); break;
        case 5: oddsumloop1(); break;
        case 6: factorialloop1(); break;
        case 7: sumloop1(); break;
        case 8: fibonacciloop1(); break;
        case 9: primeloop1(); break;
        case 10: binaryloop1(); break;
        case 11: exit(0);

        default:
            cout<<"Invalid Input";
        }//start of SWITCH
    }//end of DO
    
        while (choice !=11);

}//end of MAIN

//WITH ARGUMENT, WITHOUT RETURN VALUE
int mainloop2 (){//start of MAIN
    int choice;

    do {//start of DO
        cout<<"Main Menu"<<endl;
        cout<<"1 - Print name"<<endl;
        cout<<"2 - Print five times"<<endl;
        cout<<"3 - Print N (even numbers)"<<endl;
        cout<<"4 - Even in Between N and M"<<endl;
        cout<<"5 - Sum of Odd"<<endl;
        cout<<"6 - Factorial"<<endl;
        cout<<"7 - Sum of Number"<<endl;
        cout<<"8 - Fibonacci Series"<<endl;
        cout<<"9 - Prime Number"<<endl;
        cout<<"10 - Binary number"<<endl;
        cout<<"11 - Exit"<<endl;

        cout<<"Enter your Choice: ";cin>>choice;

        switch (choice){//start of SWITCH
            case 1: { int count; cout << "How many times: "; cin >> count; nameloop2(count); break; }
            case 2: { int times; cout << "Enter times: "; cin >> times; Afiveloop2(times); break; }
            case 3: { int N; cout << "Enter N: "; cin >> N; Nfiveloop2(N); break; }
            case 4: { int N,M; cout << "Enter N: "; cin >> N; cout << "Enter M: "; cin >> M; NandMloop2(N,M); break; }
            case 5: { int N,M; cout << "Enter N: "; cin >> N; cout << "Enter M: "; cin >> M; oddsumloop2(N,M); break; }
            case 6: { int N; cout << "Enter N: "; cin >> N; factorialloop2(N); break; }
            case 7: { int X; cout << "Enter number: "; cin >> X; sumloop2(X); break; }
            case 8: { int n; cout << "Enter n: "; cin >> n; abcloop2(n); break; }
            case 9: { int n; cout << "Enter number: "; cin >> n; primeloop2(n); break; }
            case 10: { int n; cout << "Enter decimal number: "; cin >> n; binaryloop2(n); break; }
            case 11: exit(0);

            default:
                cout<<"Invalid Input"; cin.get(); cin.get();
        }//end of SWITCH
    }//end of DO
    while (choice !=11);

}//end of MAIN

//WITHOUT ARGUMENT, WITH RETURN VALUE
int mainloop3 (){//start of MAIN
    int choice;

    do {//start of DO
        cout<<"Main Menu"<<endl;
        cout<<"1 - Print name"<<endl;
        cout<<"2 - Print five times"<<endl;
        cout<<"3 - Print N (even numbers)"<<endl;
        cout<<"4 - Even in Between N and M"<<endl;
        cout<<"5 - Sum of Odd"<<endl;
        cout<<"6 - Factorial"<<endl;
        cout<<"7 - Sum of Number"<<endl;
        cout<<"8 - Fibonacci Series"<<endl;
        cout<<"9 - Prime Number"<<endl;
        cout<<"10 - Binary number"<<endl;
        cout<<"11 - Exit"<<endl;

        cout<<"Enter your Choice: ";cin>>choice;

        switch (choice){//start of SWITCH
            case 1: nameloop3(); break;
            case 2: Afiveloop3(); break;
            case 3: Nfiveloop3(); break;
            case 4: NandMloop3(); break;
            case 5: oddsumloop3(); break;
            case 6: factorialloop3(); break;
            case 7: sumloop3(); break;
            case 8: abcloop3(); break;
            case 9: primeloop3(); break;
            case 10: binaryloop3(); break;
            case 11: exit(0);

            default:
                cout<<"Invalid Input"; cin.get(); cin.get();
        }//end of SWITCH
    }//end of DO
    while (choice !=11);

}//end of MAIN

//WITH ARGUMENT, WITH RETURN VALUE
int mainloop4(){
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
                nameloop4(5);
                break;

            case 2:
                Afiveloop4(5);
                break;

            case 3:{
                int N;
                cout<<"Enter N: ";
                cin>>N;
                Nfiveloop4(N);
                break;
            }

            case 4:{
                int N, M;
                cout<<"Enter N: "; cin>>N;
                cout<<"Enter M: "; cin>>M;
                NandMloop4(N, M);
                break;
            }

            case 5:{
                int N, M;
                cout<<"Enter N: "; cin>>N;
                cout<<"Enter M: "; cin>>M;
                cout<<"Sum of odd numbers = "<<oddsumloop4(N, M);
                break;
            }

            case 6:{
                int N;
                cout<<"Enter N: "; cin>>N;
                cout<<"Factorial = "<<factorialloop4(N);
                break;
            }

            case 7:{
                int X;
                cout<<"Enter number: ";
                cin>>X;
                cout<<"Sum of digits = "<<sumloop4(X);
                break;
            }

            case 8:{
                int n;
                cout<<"Enter n: ";
                cin>>n;
                abcloop4(n);
                break;
            }

            case 9:{
                int n;
                cout<<"Enter number: ";
                cin>>n;
                if (primeloop4(n))
                    cout<<"Prime";
                else
                    cout<<"Not Prime";
                break;
            }

            case 10:{
                int n;
                cout<<"Enter decimal number: ";
                cin>>n;
                cout<<"Binary = "<<binaryloop4(n);
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

////-------------------MAIN MENU-------------------
void SequenceMenu() {
    int choice;

    do {

        cout << "SEQUENCE MENU" << endl;
        cout << "1 - SEQUENCE W/O ARGUMENT AND NO RETURN VALUE" << endl;
        cout << "2 - SEQUENCE WITH ARGUMENT AND NO RETURN VALUE"  << endl;
        cout << "3 - SEQUENCE W/O ARGUMENT AND RETURN VALUE" << endl;
        cout << "4 - SEQUENCE WITH ARGUMENT AND RETURN VALUE" << endl;
        cout << "5 - BACK" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: mainseq1(); break;
            case 2: mainseq2(); break;
            case 3: mainseq3(); break;
            case 4: mainseq4(); break;
            case 5: return;
                default: cout << "Invalid choice";
    
        }
    } while (choice != 5);
}

void SelectionMenu() {
    int choice;

    do { 

        cout << "SELECTION MENU" << endl;
        cout << "1 - SELECTION W/O ARGUMENT AND NO RETURN VALUE" << endl;
        cout << "2 - SELECTION WITH ARGUMENT AND NO RETURN VALUE"  << endl;
        cout << "3 - SELECTION W/O ARGUMENT AND RETURN VALUE" << endl;
        cout << "4 - SELECTION WITH ARGUMENT AND RETURN VALUE" << endl;
        cout << "5 - BACK" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: mainsel1(); break;
            case 2: mainsel2(); break;
            case 3: mainsel3(); break;
            case 4: mainsel4(); break;
            case 5: return;
                default: cout << "Invalid choice";
        
        }
    } while (choice != 5);
}

void LoopMenu() {
    int choice;

    do {

        cout << "LOOP MENU" << endl;
        cout << "1 - LOOP W/O ARGUMENT AND NO RETURN VALUE" << endl;
        cout << "2 - LOOP WITH ARGUMENT AND NO RETURN VALUE"  << endl;
        cout << "3 - LOOP W/O ARGUMENT AND RETURN VALUE" << endl;
        cout << "4 - LOOP WITH ARGUMENT AND RETURN VALUE" << endl;
        cout << "5 - BACK" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: mainloop1(); break;
            case 2: mainloop2(); break;
            case 3: mainloop3(); break;
            case 4: mainloop4(); break;
            case 5: return;
                default: cout << "Invalid choice";

        }
    } while (choice != 5);
}

int main() {
    int choice;

    do {

        cout << "MAIN MENU" << endl;
        cout << "1 - SEQUENCE MENU" << endl;
        cout << "2 - SELECTION MENU"  << endl;
        cout << "3 - LOOP MENU" << endl;
        cout << "0 - EXIT" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: SequenceMenu(); break;
            case 2: SelectionMenu(); break;
            case 3: LoopMenu(); break;
            case 0: exit(0);
                default: cout << "Invalid choice";
        
        }
    } while (choice != 0);
}