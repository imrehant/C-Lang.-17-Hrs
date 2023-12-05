// passing array as a argument :
#include<stdio.h>
char modify(char[] , char[] ); // no argument onlt return type
int main()
{
    float average;
    int marks[5]={10,20,15,10,20};
    average=avg(marks,5);
    printf("average of marks = %.2f", average);
    return 0;
}

float avg(int x[], int n){
    int sum = 0; 
    float avger;
    for (int i = 0; i < n; i++)
    {
        sum= sum + x[i];
    }
    avger=sum/n;
    return avger;
}
