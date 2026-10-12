#include <stdio.h>
#include <stdlib.h>

int main() {

    int arr[15] = {1, 3, 8, 10, 13, 15, 18, 20, 23, 26, 21, 50, 30, 40, 20};
    int sum=0;

for (int i=0; i<16; i++) {
    sum+=arr[i];  }

    printf("\n%d ", sum);
 return 0;
}