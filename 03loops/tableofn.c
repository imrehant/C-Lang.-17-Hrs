// print table of n :
#include<stdio.h>
int main (){
    int n;
    printf("Enter the number which you want print table :");
    scanf("%d",&n);
    for (int i = n; i <=n*10; i=i+n)
    printf("%d ", i);
}