#include <stdio.h>
#include<stdlib.h>
int main()
{
	int* ptr;
	int n, i;

	printf("Enter the number of elements: ");
	scanf_s("%d", &n);
	//equally divided memory is allocated of 4 bytes for int datatype = 4 * n
	ptr = (int*)calloc(n, sizeof(int));
	printf("\nMemory allocated successfully");
	printf("\nNow enter the elements of array: ");
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &ptr[i]);
	}

	printf("\nThe elements of array are: ");
	for (i = 0; i < n; i++)
	{
		printf(" %d ", ptr[i]);
	}
	return 0;
}