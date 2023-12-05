// print number n to 1 using extra parameter:
#include<stdio.h>
void fun(int n, int x){
    if (n>x) return; // base case 
    printf("%d\n",n); // kaaam
    fun(n+1, x);
    
}
int main(){
    int x;
    printf("Enter value of x :");
    scanf("%d",&x);
    fun(1,x);
    printf("sucessfull");
    return 0;
}