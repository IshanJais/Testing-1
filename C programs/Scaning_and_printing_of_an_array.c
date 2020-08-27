#include <stdio.h>
int main() {
	int a[10], i, n;
	printf("Enter size of array: "); scanf_s("%d", &n);
	printf("Enter %d elements in the array : ", n);
	for (i = 0; i <= n; i++)
	{
		scanf_s("%d", &a[i]);
	}
	printf("Please enter the elements of the array=");
	for (i = 0; i <= n; i++)
	{
		printf(" %d ", a[i]);
	}
	return 0;
}