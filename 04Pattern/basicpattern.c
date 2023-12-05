// basic pattern print :
#include<stdio.h>
int main (){
    int n;
    printf("Enter number of row :");
    scanf("%d",&n);
    int m;
     printf("Enter number of column :");
    scanf("%d",&m);
    // Nested loop
    for (int i =1; i <=n; i++) // rows
    { 
            for ( int j = 1; j <=m; j++) // column
            {
             printf("*");
            }
    printf("\n");
    }
}
