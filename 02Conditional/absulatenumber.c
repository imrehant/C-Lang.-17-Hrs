#include<stdio.h>
int main ()
{
    int n;
    printf("Entre a numner:");
    scanf("%d",&n);
    if (n<0) n=n*(-1);
        printf("The number absolute number is %d ", n);

    return 0;
    
}