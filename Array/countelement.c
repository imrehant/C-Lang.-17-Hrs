// number of element greater than f4
#include<stdio.h> // librery for use max and min 
int main(){
    int arr[]= { 2,4,1,6,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        printf("%d \n",arr[i]);
    }
    int count =0;
    for (int i = 1; i <n; i++){
    if (arr[i]>4) count++ ;
    }
  
    printf(" number of element greater than 4 = %d", count );
    return 0;
}