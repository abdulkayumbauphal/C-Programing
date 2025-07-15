#include<stdio.h>

int main(){
    char alp;

    printf("Enter a Charecter: ");
    scanf(" %c", &alp);

    if(alp == 'a' || alp == 'e' || alp == 'i' || alp == 'o' || alp == 'u' || alp == 'A' || alp == 'E' || alp == 'I' || alp == 'O' || alp == 'U')
    {
    printf("%c is Vowel", alp);
    }
    else{
    printf("%c is Consonant", alp);
    }
    return 0;
}
