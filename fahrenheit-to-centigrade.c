#include<stdio.h>

int main(){

   float c, f;

   printf("Enter Farhrenheit : ");
   scanf("%f", &f);

    c = (f-32)/1.8;
   printf("Centigrade: %.2f",c);

    return 0;
}
