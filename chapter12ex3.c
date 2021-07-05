

#include <stdio.h>

int sum(int arr[], int n)
{
	int sum = 0; // initialize sum

	// Iterate through all elements
	// and add them to sum
	for (int i = 0; i < n; i++)
	sum += arr[i];

	return sum;
}

int main()
{
	int arr[] = {20, 4, 10, 15};
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("Sum of given array is %d", sum(arr, n));
	return 0;
}
