// sum of all element of array
#include<stdio.h>
int main(){
    int size , sum =0;
    printf("Entre size of array:");
    scanf("%d",&size);
    int arr[size];
    int i;
    for ( i = 0; i <size; i++)
    { 
    printf("Entre value of array ");
    scanf("%d",&arr[i]);
    // int sum =0;
    arr[i]=arr[i]*arr[i];
    }
    printf("sume of element = %d",arr[i] );
    return 0;
}