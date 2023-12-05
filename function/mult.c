#include<stdio.h>
int mult(int x , int y){
    // int result = x*y;
    // printf("The multiply of x and y = %d", result);
    return x*y; // argument with return value 
}
int main(){
    int x,y ;
    printf("Entre the value of x and y :");
    scanf("%d %d",&x,&y);
//    int value= mult(x,y);
   printf("The multiply of x and y = %d", mult(x,y)); // calling fun
    return 0;
}