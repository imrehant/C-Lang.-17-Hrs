// sum of all element of array
#include<stdio.h>
int main(){
    int size , sum =0;
    printf("Entre size of array:");
    scanf("%d",&size);
    int arr[size];
  
    for (int i = 0; i <size; i++)
    { 
    printf("Entre value of array ");
    scanf("%d",&arr[i]);
    // int sum =0;
    sum = sum+arr[i];
    }
    printf("sume of element = %d", sum );
    return 0;
}