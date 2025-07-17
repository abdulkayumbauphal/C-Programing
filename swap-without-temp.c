#include<stdio.h>

int main(){

    int num1 = 3, num2 = 8;


    num2 = num2 - num1;
    num1 = num1 + num2;
    num2 = num1 - num2;

    printf("num1 = %d\n", num1);
    printf("num2 = %d", num2);

    return 0;
}
