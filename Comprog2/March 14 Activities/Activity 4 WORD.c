#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(){

char word[100];

    printf("Enter a Word: "); 
    scanf("%s", word);//process of inputting the word

    printf("%s\n", word);//Printing the word 
//-------------Length of the Word--------------
printf("Length of the word: %d\n", strlen(word));//process of counting the length

    word[0]=toupper(word[0]);
    printf("First Upper case letter: %s", word);

return 0;
}
