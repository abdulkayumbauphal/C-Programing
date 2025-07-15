#include<stdio.h>
#include<math.h>

int main()
{
    double a,b,c,dis,root1,root2,realpart,ipart;

    printf("Enter the value of a b c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    dis=b*b-4*a*c;

    if(dis > 0)
    {

        root1=(-b + sqrt(dis))/(2*a);
        root2=(-b - sqrt(dis))/(2*a);
        printf("Two distinct real roots:\n");
        printf("root1 = %lf\n ", root1);
        printf("root2 = %lf\n ", root2);

    }
    else if(dis == 0)
    {
        root1=root2=(-b)/(2*a);
        printf("Two equal real roots:\n");
        printf("root1 = root2 = %lf", root1);
    }
    else
    {
        realpart=(-b)/(2*a);
        ipart=(sqrt(-dis))/(2*a);
        printf("Two Complex Roots: ");
        printf("root1 = %lf + %lfi", realpart, ipart);
        printf(" root2 = %lf - %lfi", realpart, ipart);
    }



    return 0;
}
