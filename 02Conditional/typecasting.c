#include<stdio.h>
int main ()
{
    float n;
    printf("Entre a numner:");
    scanf("%f",&n);
    int x = (int)n ;
    float a = (float)x ;
    if (n - a == 0)
        printf("The number is interger ");
    if (n - a > 0)
        printf("The number is not integer ");

    return 0;
    
}