// Mult of matrix :
#include <stdio.h>

int main()
{
    int a[2][3], b[3][2],c[2][2], mult, i, j, k;
    // Loop for first matrix :
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Entre The value of array[%d][%d]:", i, j);
            scanf("%d", &a[i][j]);
        }

        printf("\n");
    }
    // Loop for take second matrix input :
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Entre The value of array[%d][%d]:", i, j);
            scanf("%d", &b[i][j]);
        }

        printf("\n");
    }
    
    // Loop for Process Mult:
    for (i = 0; i < 2; i++)
    { 
        for (j = 0; j < 2; j++)
        {
            mult = 0;
            for (k = 0; k < 3; k++) // Extra loop for mult 
            {

                mult = mult + a[i][k]*b[k][i];
                
            }
            c[i][j]=mult;
            printf("%d\t", c[i][j]);
        }

        printf("\n");
    }

    return 0;
}