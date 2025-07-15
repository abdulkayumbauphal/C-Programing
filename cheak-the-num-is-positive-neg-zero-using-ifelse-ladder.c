#include<stdio.h>

int main()
{
    int num;

    printf("Enter a Number: ");
    scanf("%d", &num);

    if(num > 0){
        printf("%d is positive number", num);
    }
    else if(num < 0){
        printf("%d is negetive number", num);
    }
    else{
        printf("You Entered Zero");
    }
    return 0;
}
