// print number n to 1 without extra parameter:
#include<stdio.h>
#include<stdio.h>
void fun(int n){
    if (n==0) return;
    fun(n-1);
    printf("%d\n",n);
    
}
int main(){
    int x;
    printf("Enter value of x :");
    scanf("%d",&x);
    fun(x);
    printf("sucessfull");  
    return 0;
}