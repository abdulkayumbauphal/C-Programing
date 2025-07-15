
#include<stdio.h>

int main()
{
char c;

    printf("Enter a Charecter: ");
    scanf("%c", &c);

    if(c >= 'a'&& c <= 'z'){

        printf("%c is a small alphabet", c);
    }
    else if(c >= 'A' && c <= 'Z'){
        printf("%c is a capital alphabet", c);
    }
    else{
        printf("%c is not an alphabet", c);
    }
    return 0;
}
