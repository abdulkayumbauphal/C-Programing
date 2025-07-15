#include<stdio.h>

int main(){

    int n1, n2, n3;

    printf("Enter Three Number With Space: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if(n1>=n2 && n1>=n3){
    printf("%d Is Largest Number", n1);
    }

    else if(n2>=n3 && n2>=n1){
    printf("%d Is Largest Number", n2);
    }

    else{
     printf("%d Is Largest Number", n3);
    }
    return 0;
}
