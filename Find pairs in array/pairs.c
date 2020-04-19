#include <stdio.h>
#define SIZE 100

// Naive method to find a pair in an array with given sum
void findPair(int arr[], int n, int sum)
{
	// consider each element except last element
	for (int i = 0; i < n - 1; i++)
	{
		// start from i'th element till last element
		for (int j = i + 1; j < n; j++)
		{
			// if desired sum is found, print it and return
			if (arr[i] + arr[j] == sum)
			{
				printf("Pair found at index %d and %d", i, j);
				return;
			}
		}
	}
 
	// No pair with given sum exists in the array
	printf("Pair not found");
}
 
// Find pair with given sum in the array
int main()
{
	int arr[SIZE];
	int sum;
	int n;
	
	printf("Enter the size of array");
	scanf("%d",&n);
	
	printf("Enter the elements");
	for(int i=0;i<n;i++)
	{
	    scanf("%d",&arr[i]);
	}
	
	printf("Sum you want to find");
	scanf("%d",&sum);
	
 
	findPair(arr, n, sum);
 
	return 0;
}