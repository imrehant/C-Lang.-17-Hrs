#include<stdio.h>
int main (){
    int x ;
    printf("enter value of x cordinte:");
    scanf("%d", &x);
    int y ;
    printf("enter value of y cordinate:");
    scanf("%d", &y);
    if (x==x && y==y)
    {
        printf("the point lyes in 1st cordinate");
    }
    
    else if (x==-x && y==-y)
    {
        printf("the point lyes in 3rd cordinate");
    }
    else if (x==-x)
    {
        printf("the point lyes in 2nd cordinate");
    }
    else if (y==-y)
    {
        printf("the point lyes in 4rt cordinate");
    }
    else{
        printf("invalid input");
    }
    return 0;  
    
}