#include <stdio.h>

//FUNCTIONS

//BUBBLE SORT
void bubsort(int arr[], int n){

    int i,j,temp;

    int comparisons = 0, swaps = 0;

    for( i=0; i<n-1; i++){//index indicator


        for (j=0; j<n-i-1; j++){ //value of the index

            if (arr[j] > arr[j+1]){
              comparisons++;
              temp=arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=temp; //swapping of elements
              swaps++;


            }
        }
    }
    printf("Bubble Sort: Comparisons: %d, Swaps: %d\n", comparisons, swaps);
        printf("\n");
        
}

//INSERTION SORT
void insort(int arr[], int n){

    int i,j,key;

    int comparisons = 0, swaps = 0;

    for(i=1; i<n; i++){//index indicator
        key = arr[i];
        j = i-1;
    
            while(j>=0 && arr[j]>key){//comparison of elements
                comparisons++;
                arr[j+1] = arr[j];
                swaps++;
                j--;
            }
                arr[j+1]=key;//States the next element of the index
    }
    printf("Insertion Sort: Comparisons: %d, Swaps: %d\n", comparisons, swaps);
     printf("\n");
}

//SELECTION SORT
void selsort(int arr[], int n){

    int i,j,min_idx,temp;

    int comparisons = 0, swaps = 0;

    for(i=0; i<n-1;i++){//index indicator
        min_idx=i;

            for(j=i+1; j<n; j++){//getting the elements of index
                comparisons++;
                if (arr[j]<arr[min_idx]){//comparison of elements
                    min_idx=j;
                }
            }

        if(min_idx != i){
            temp=arr[i];
            arr[i]=arr[min_idx];
            arr[min_idx]=temp;//swapping/assigning elements
            swaps++;
        }
    }
    printf("Selection Sort: Comparisons: %d, Swaps: %d\n", comparisons, swaps);
    printf("\n");
}

void printARRAY(int arr[], int n){
    int i;
    

    for (i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}


int main(){
    int original[]={29, 10, 14, 37, 13, 22, 11, 50, 45, 55};
    int n= sizeof(original)/sizeof(original[0]);
    int arr[10]; // Temporary array for sorting
    int i;

//-------------BUBBLE------------------
    printf("Unsorted Array:");
    printARRAY(original, n);
    printf("\n");
    
    // Copy original array for bubble sort
    for(i=0; i<n; i++) arr[i] = original[i];
    
    printf("BUBBLE SORT\n");
    bubsort(arr, n);
    printf("Sorted Array: ");
    printARRAY(arr,n);
    printf("\n\n");
//-------------BUBBLE------------------
    

//-------------INSERTION------------------
    // Copy original array for insertion sort
    for(i=0; i<n; i++) arr[i] = original[i];
    
    printf("Unsorted Array:");
    printARRAY(original, n);
    printf("\n");
    printf("INSERTION SORT\n");
    insort(arr, n);
    printf("Sorted Array: ");
    printARRAY(arr, n);
    printf("\n\n");
//-------------INSERTION------------------
    
//-------------SELECTION------------------
    // Copy original array for selection sort
    for(i=0; i<n; i++) arr[i] = original[i];
    
    printf("Unsorted Array:");
    printARRAY(original, n);
    printf("\n");
    printf("SELECTION SORT\n");
    selsort(arr, n);
    printf("Sorted Array: ");
    printARRAY(arr, n);
    printf("\n");
//-------------SELECTION------------------

    return 0;
}