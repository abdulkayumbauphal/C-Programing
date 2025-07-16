//uppercase-to-lower-case-letter-with-library
#include<stdio.h>

int main(){

    char lower,upper;

    printf("Enter Any Uppercase Letter : ");
    scanf("%c", &upper);

   lower = tolower(upper);

   printf("The Lowercase Letter :%c",lower);


}
