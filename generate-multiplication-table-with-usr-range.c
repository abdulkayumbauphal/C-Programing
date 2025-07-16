#include<stdio.h>

int main()
{
    int num,i,mul,range;

    printf("Enter a Number: ");
    scanf("%d", &num);

      printf("Enter Range that you Multiplication: ");
    scanf("%d", &range);


    for(i=1; i<=range; i++){
        mul=num*i;
        printf("%d * %d = %d\n", num, i, mul);
    }

    return 0;
}
