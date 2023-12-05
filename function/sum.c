// no argument with return types :
#include<stdio.h>
int sum(void); // no argument onlt return type
int main()
{
    int s ;
    s = sum ();
    printf("sum of two number = %d",s);
     return 0;
}

int sum(){
    int a,b, sum ;
    printf("Entre 1st Number =");
    scanf("%d",&a);
     printf("Entre 2nd Number =");
    scanf("%d",&b);
    sum = a + b;
    return sum;
    
}

