#include<stdio.h>

int main()
{
    int num,i,mul;

    printf("Enter a Number: ");
    scanf("%d", &num);

    for(i=1; i<=10; i++){
        mul=num*i;
        printf("%d * %d = %d\n", num, i, mul);
    }

    return 0;
}
