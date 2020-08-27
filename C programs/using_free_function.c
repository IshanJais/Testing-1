#include<stdio.h>
#include<stdlib.h>
int main()
{
	int* ptr, * ptr1;
	int n;
	printf("Enter the number of elements: ");
	scanf_s("%d", &n);

	ptr = (int*)malloc(n * sizeof(int));
	ptr1 = (int*)calloc(n, sizeof(int));

	printf("\nMEMORY ALLOCATED SUCCCESSFULLY FOR MALLOC");
	free(ptr);
	printf("\nMEMORY IS NOW FREE ENJOY!!!!");
	
	printf("\nMEMORY ALLOCATED SUCCCESSFULLY FOR CALLOC");
	free(ptr1);
	printf("\nMEMORY IS NOW FREE ENJOY!!!!");
}