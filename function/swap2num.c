// Swap two number using function:
#include<stdio.h>
void swap(int *a,int *b);
 int a, b ;
int main (){
    // int a, b ;
    printf("Enter First number:");
    scanf("%d",&a); 
    printf("Enter Second number:");
    scanf("%d",&b);
    printf("Number before swap is a=%d and b=%d\n",a,b);
    swap(&a,&b) ;
    printf("Number After swap is a=%d and b=%d\n",a,b);
    return 0;
}
void swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}