
//program to add(+) numbers until the user enters zero

#include<stdio.h>

int main()
{
    int a ,sum=0;

    do{
    printf("Enter Number: ");
    scanf("%d",&a);
    sum+=a;
    }
    while(a !=0 );
    printf("%d", sum);
    return 0;
}
