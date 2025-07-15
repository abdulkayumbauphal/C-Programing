#include<stdio.h>

int main()
{

    char c;

    printf("Enter A Charecter: ");
    scanf("%c", &c);

    switch(c)
    {

    case 'a':
        printf("%c Is Vowel\n", c);
        break;

    case 'e':
        printf("%c Is Vowel", c);
        break;

    case 'i':
        printf("%c Is Vowel", c);
        break;

    case 'o':
        printf("%c Is Vowel", c);
        break;

    case 'u':
        printf("%c Is Vowel", c);
        break;

    case 'A':
        printf("%c Is Vowel", c);
        break;

    case 'E':
        printf("%c Is Vowel", c);
        break;


    case 'I':
        printf("%c Is Vowel", c);
        break;


    case 'O':
        printf("%c Is Vowel", c);
        break;

    case 'U':
        printf("%c Is Vowel", c);
        break;

    default:
        printf("Is Consonant" );

    }

  return 0;

}
