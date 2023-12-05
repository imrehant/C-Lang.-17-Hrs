#include<stdio.h>
int main (){
    int x=9;
    int* z= &x;
    printf("value of x = %d\n", *z);
    printf("address of z = %p\n", z);
    printf("address of x = %p", &x);
    return 0;
}