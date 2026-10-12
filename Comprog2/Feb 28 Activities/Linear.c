#include <stdio.h> //LINEAR SEARCHING

int Lsearch(int num){

    int arr[50]; //index
    for (int i=0; i<51; i++) {
        arr [i] = 50+i;
    }

    for (int a=0; a<101; a++){
        if (arr[a]==num)
        {
            printf("%d", a);
            return a;
        }
        
    }
    printf("Your number is not found!");

    return -1;
}

int main(){

    int num;

    printf("Enter a Number from 50-100: ");
    scanf("%d", &num);
    Lsearch(num);

return 0;
}