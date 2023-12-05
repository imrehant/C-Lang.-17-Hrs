// Print Value using address  
#include<stdio.h>
int main (){
    int x=9 , b=100;
    int* z= &x;

    int* y = &b;
    *y= *z ;
    printf("%d\n",*z);
    printf("%p\n",z); // adress of x 
    printf("%d\n",x);
    printf("%d\n",*y);
    return 0;
}