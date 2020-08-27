#include<stdio.h>
//#include<stdlib.h>
int main()
{
	int* ptr;
	int n, i;
	printf("Enter the number of elements:");
	scanf_s("%d", &n);

	ptr = (int*)calloc(n, sizeof(int));
	printf("\nMEMORY OF SIZE %d IS ALLOCATED", n);

	printf("\nNow enter the elements inside it: ");
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &ptr[i]);
	}
	printf("\nThe elements u entered are: ");
	for (i = 0; i < n; i++)
	{
		printf(" %d ", ptr[i]);
	}

	//now we are using code for realloc method
	printf("\nEnter the number of elements:");
	scanf_s("%d", &n);
	ptr = realloc(ptr, n * sizeof(int));
	printf("\nMEMORY OF SIZE %d IS REALLOCATED", n);

	printf("\nNow enter the elements inside it: ");
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &ptr[i]);
	}
	printf("\nThe elements u entered are: ");
	for (i = 0; i < n; i++)
	{
		printf(" %d ", ptr[i]);
	}
	free(ptr);
}