// argument with no return types :
#include<stdio.h>
void sum(int , int ); // no argument onlt return type
int main()
{
    int a,b;
    printf("Entre 1st Number =");
    scanf("%d",&a);
    printf("Entre 2nd Number =");
    scanf("%d",&b);
    sum (a,b);
     return 0;
}

void sum(int x, int y){
    
    int sum=0;
    sum = x + y;
    printf("sum of two number = %d",sum);
    
}
