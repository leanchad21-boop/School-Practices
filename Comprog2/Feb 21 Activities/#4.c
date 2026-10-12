#include <stdio.h>

int main()
{
    float arr[5];
    int i;
 
    float pi = 3.14;
    float e = 2.72;
    float step = (pi - e) / 4;

    for (i = 0; i < 5; i++){
        arr[i] = pi - (i * step);
    }

    for (i = 0; i < 5; i++){
        printf("%.2f\n", arr[i]);
    }

    return 0;
}