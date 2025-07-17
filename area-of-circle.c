#include<stdio.h>
#include<math.h>

int main(){

   double r, area;

   printf("Enter Radius : ");
   scanf("%lf", &r);

   area = M_PI*r*r;

   printf("Area Of Circle : %lf", area);

    return 0;
}

