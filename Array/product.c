// product of all element of array :
#include<stdio.h>
int main(){
    int size , pro =1;
    printf("Entre size of array:");
    scanf("%d",&size);
    int arr[size];
  
    for (int i = 0; i <size; i++)
    { 
    printf("Entre value of array ");
    scanf("%d",&arr[i]);
    // int sum =0;
    pro = pro*arr[i];
    }
    printf("product of element = %d", pro );
    return 0;
}