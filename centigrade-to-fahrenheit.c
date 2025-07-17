#include<stdio.h>

int main(){

   float c, f;

   printf("Enter Centigrade : ");
   scanf("%f", &c);

    f = (c * 1.8) + 32;
   printf("Farhrenheit: %.2f",f);

    return 0;
}
