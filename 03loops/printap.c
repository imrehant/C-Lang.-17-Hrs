// print AP by taking input by user  :
#include<stdio.h>
int main (){
    int n;
    printf("Enter the no of terms :");
    scanf("%d",&n);
    int a;
    printf("Enter first terms :");
    scanf("%d",&a);
    int d;
    printf("Enter comon diffrence :");
    scanf("%d",&d);
    for (int i = 1; i <=n; i++){
       printf("%d ", a);
       a=a+d ;

   }
   return 0;
}