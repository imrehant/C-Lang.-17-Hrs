#include<stdio.h>
void change(int x[5]){
    x[2]= 20;
}
int main(){
    int arr[5]={1,2,3,4,5};
    printf("%d\n",arr[2]);
    change(arr);
    printf("%d\n",arr[2]);
    return 0;
}