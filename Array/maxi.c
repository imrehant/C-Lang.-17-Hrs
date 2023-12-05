// max of all element of array :
// #include<stdio.h>
// int main(){
//     int arr[]= { 2,4,1,6,9};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int mx=arr[0];
//     for (int i = 1; i <n; i++){
//     if (mx<arr[i])mx=arr[i];
//     }
  
//     printf(" of element = %d", mx );
//     return 0;
// }

// Method second
#include<stdio.h>
#include<limits.h> // librery for use max and min 
int main(){
    int arr[]= { 2,4,1,6,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int mx=INT_MIN;
    for (int i = 1; i <n; i++){
    if (mx<arr[i])mx=arr[i];
    }
  
    printf(" of element = %d", mx );
    return 0;
}