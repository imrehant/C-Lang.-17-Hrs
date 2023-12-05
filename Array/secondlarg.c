// Second higest element in array :
 // searching in array
#include<stdio.h>
#include<limits.h>// librery for use max and min 
int main(){
    int arr[]= { 2,4,1,6,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    int max = INT_MIN ;
    for (int i = 0; i < n; i++)
    {
        if (max<arr[i])
        {
            max=arr[i];
        }     
    }
    printf("%d is max element of array \n", max);
    
    // Finding second max 
        int smax = INT_MIN ;
    for (int i = 0; i < n; i++)
    {
        if ( max != arr[i] && smax<arr[i])
        {
            smax=arr[i];
        }     
    }
    printf("%d is second max element of array \n ", smax);
   
}