  // taking input and print uotput :
  #include<stdio.h>
  int main(){
    int n;
    printf("Entre size of array :");
    scanf("%d",&n);
    int  arr[n];
    printf("Size of array =%d\n", sizeof(arr));
    for (int i = 0; i <n; i++) // Input
    {
        printf("Enter value of array:");
        scanf("%d",&arr[i]);
    }
        for (int i = 0; i <n; i++) // output
    {
        printf("%d\n",arr[i]);
    }
    return 0;
  }