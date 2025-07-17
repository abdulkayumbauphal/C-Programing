#include<stdio.h>

int main(){

    int num1, num2, sum;
    float avg;

    printf("Enter Two Integer Number : ");
    scanf("%d %d", &num1, &num2);

    sum = num1 + num2;
    printf("Sum :%d \n", sum);

    avg = (float)sum/2; // tyoe casting
    printf("Average : %.2f", avg);

    return 0;
}
