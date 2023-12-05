#include<stdio.h>
int main ()
{
    int n;
    printf("Entre a numner:");
    scanf("%d",&n);
    if (n%15!=0 && (n%5==0 || n%3==0)){
        printf("The number is div by 3 or 5 but not dive by 15 ");
    }
        
    else{
        printf("Invalid number ");
    }
        

    return 0;
    
}