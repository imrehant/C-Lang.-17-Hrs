// higest factor of number  :
#include<stdio.h>
int main (){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    // Method 1---
    for (int i = n-1; i >=1; i--){
      if (n%i==0)
      {
        printf("the factor is %d",i);
        break;
      }
    //   Method 2---
    //     for (int i = n/2; i >=1; i--){
    //   if (n%i==0)
    //   {
    //     printf("the factor is %d",i);
    //     break;
    //   }
      

   }
   return 0;
}