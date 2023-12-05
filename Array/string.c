#include <stdio.h>

// Function to find maximum in arr[] of size n
float largest(float arr[5])
{
	int i;
	// Initialize maximum element
	float max = arr[0];

	for (i = 1; i < 5; i++){
       if (arr[i] > max)
			max = arr[i];
    }		
printf("Largest in given array is %f",max);
return 0;
}
// main functio
int main()
{
	float arr[5];
		for (int i = 0; i < 5; i++){
		    printf("Enter the float element of arrya :");
		    scanf("%f", &arr[i]);
		}
	// Function call
    largest(arr);
	return 0;
}
