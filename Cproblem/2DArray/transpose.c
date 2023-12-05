#include <stdio.h>

int main()
{
    int arr[3][4];
    int brr;
    int i, j;

    // Loop for takinh input :
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Entre The value of array[%d][%d]", i, j);
            scanf("%d", &arr[i][j]);
        }

        printf("\n");
    }

    // loop for print the output :
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    printf("transpose of the above Matrix\n");
    printf("---------------------------------\n");

    // loop for print transpose matrix
    // loop for print the output :
    for (j = 0; j < 4; j++)
    {
        for (i = 0; i < 3; i++)
        {
            brr = arr[i][j]; // this line used for only print transpose using second array ;
            printf("%d\t", brr);
        }
        printf("\n");
    }

    return 0;
}