//loop er modde break korbe
#include<stdio.h>

int main()
{

    int a=1;

    while(a<=10)
    {
        printf("%d\n", a);
        ++a;
    if(a>6){
    break;
    }
    }
    return 0;
}
