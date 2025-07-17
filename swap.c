#include<stdio.h>

int main(){

    int num1 = 4, num2 = 8;

    int temp;

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("num1 = %d\n", num1);
    printf("num2 = %d", num2);

    return 0;
}
