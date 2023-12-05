// basic pattern of triangle :
#include<stdio.h>
int main (){
    int n;
    printf("Enter value of n:");
    scanf("%d",&n);
    // Nested loop
    for (int i =1; i <=n; i++) // rows
    { 
            for ( int j = 1; j <=i; j++) // column
            {
             printf("* ",j);
            }
    printf("\n");
    }
}