#include <stdio.h>
#include <stdlib.h>

int main() {

int arr[10]; //Interger array with size 10 to store rand #
int max;//variable to store the max value in array

    for (int i=0; i<10; i++) {
      arr[i] = rand() % 100 + 1;}//fills the arr[10])

max =arr[0]; //initial value

for (int i=1; i<10; i++) {
    if (arr[i] > max) {//comparing the max    
        max = arr[i];}     }           
    
    printf("Array elements: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

printf("\nMaximum value in the array: %d\n", max);      

return 0;
}