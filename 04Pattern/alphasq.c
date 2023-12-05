// basic pattern of alphabet :
#include<stdio.h>
int main (){
    int n;
    printf("Enter value of n  :");
    scanf("%d",&n);
    // int m;
    //  printf("Enter number of column :");
    // scanf("%d",&m);
    // Nested loop
    for (int i =1; i <=n; i++) // rows
    { 
            for ( int j = 1; j <=n; j++) // column
            {
             printf("%c ",j+64);
            }
    printf("\n");
    }
}