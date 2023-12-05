// searching in array
#include<stdio.h>
#include<stdbool.h> // librery for use max and min 
int main(){
    int arr[]= { 2,4,1,6,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    int x= 4;
    bool flag= false;
    for (int i = 1; i <n; i++){
    if (arr[i]==x) flag=true ; break;
    }
    if (flag==true)
    {
        printf("Exist");
    }
    else
    {
         printf("not Exist");
    }
}