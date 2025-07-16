#include<stdio.h>

int main()
{
    int num,i,range;

    printf("Enter a Number: ");
    scanf("%d", &num);

    printf("Find factors of %d from 1 to : ", num);
    scanf("%d", &range);

    printf("Factors of %d between 1 to %d:\n", num, range);

    for(i=1; i<=range; i++)
    {

        if(num % i == 0)
        {

            printf("%d\n", i);
        }
    }
    return 0;
}
