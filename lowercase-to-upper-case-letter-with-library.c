//lowercase-to-upper-case-letter-with-library
#include<stdio.h>

int main(){

    char lower,upper;

    printf("Enter Any Lowercase Letter : ");
    scanf("%c", &lower);

   upper = toupper(lower);

   printf("The Uppercase Letter :%c",upper);


}
