// basic pattern of ulta triangle :
#include<stdio.h>
int main (){
    int n;
    printf("Enter value of n:");
    scanf("%d",&n);
    // Nested loop
    for (int i =1; i <=n; i++) // rows
    { 
            for ( int j = n; j >=i; j--) // column
            {
             printf("* ",j);
            }
    printf("\n");
    }
}