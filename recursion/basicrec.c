#include<stdio.h>
void fun(int n){
    if (n==0) return;
    
    printf("\ngood morning \n ");
    fun(n-1);
}
int main(){
    fun(3);
    return 0;
}