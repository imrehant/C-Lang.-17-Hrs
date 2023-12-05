#include<stdio.h>
int main ()
{
    int n;
    printf("Entre a numner:");
    scanf("%d",&n);
    if (n%5==0)
    {
        printf("The number is divisiable by  5 ");

    }
    else
    {
       printf("The number not divisiable by 5");
    }
    return 0;
    
}