#include <stdio.h>

int main() {

    char letters[26];
    char input;
    int i;
    int fLinear=-1;
    int fBinary=-1;

    for(int i=0; i<26; i++){
        letters[i] = 'A' + i; //INITIALIZE THE ALPHABET
    }

    printf("Alphabet Game Lopit\n");
    printf("Enter a letter yow: ");
    scanf("%c", &input);


    for (int i=0; i<26; i++) { //LINEAR PROCESS
        if (letters[i]==input) {
            fLinear=i;
        break;
        }
    }

    int low=0;
    int high=26-1;

    while(low<=high) { //BINARY
        int mid=(low+high)/2;
        if (letters[mid]==input) {
            fBinary=mid;
            break;
        }
        else if (letters[mid]<input) {
            low=mid+1;
        }
        else {
            high=mid-1;
        }
    }

    printf("Linear Search: %d\n", fLinear);
    printf("Binary Search: %d\n", fBinary);

}



