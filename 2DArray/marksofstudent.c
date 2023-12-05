#include<stdio.h>
int main(){
    int marks[3][5];
    int i,j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Entre the marks of student [%d][%d] : ", i, j);
            scanf("%d",&marks[i][j]);
            // printf("\n");
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d \t",marks[i][j]);
        }
        printf("\n");
    }
    return 0;

}