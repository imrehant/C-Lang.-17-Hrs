// basic pattern print :
#include<stdio.h>
int main (){
    int n;
    printf("Enter side of square :");
    scanf("%d",&n);
    // int m;
    //  printf("Enter number of column :");
    // scanf("%d",&m);
    // Nested loop
    for (int i =1; i <=n; i++) // rows
    { 
            for ( int j = 1; j <=n; j++) // column
            {
             printf("%d ",j);
            }
    printf("\n");
    }
}