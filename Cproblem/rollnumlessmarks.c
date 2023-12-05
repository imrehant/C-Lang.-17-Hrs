// Qno:- 01 > if the marks of any student is less than 35
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of array :");
    scanf("%d", &n);
    int marks[n];
    for (int i = 0; i < n; i++)
    {
        printf("Entre the valu of array [%d] = ", i);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (marks[i] < 35)
        {
            printf("The index of the marks which is less than 35 = %d \n", i);
        }
    }

    return 0;
}