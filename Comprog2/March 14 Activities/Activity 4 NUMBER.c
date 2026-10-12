#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

//-------------Enter a Number--------------
int main(){

    double num;
    
    printf("Enter a Number: "); 
    scanf("%lf", &num);//process of inputting the number

    printf("%.2lf\n", num);//Printing the number
    
//-------------Square root of a Number--------------
   printf("Square root: %.2f\n", sqrt(num));

return 0;
}
