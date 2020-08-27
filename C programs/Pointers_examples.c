#include<stdio.h>
int main()
//{
	//int arr[10] = { 1,9,3,4,5,6,7,8,9,10 };
	//int* ptr = arr;
	//printf("\nAdress of arr=%p", &arr[2]);
	//printf("\nThe value at ptr =%d", *ptr);
	//return 0;
//}
{
	int size, *ptr,i, arr[10], sum=0;
	printf("The size of array: ");
	scanf_s("%d", &size);
	printf("\nEnter the elements of array=");
	for (i = 0; i < size; i++)
	{
		scanf_s("%d ", &arr[i]);
	}
	ptr = arr;
	for (i = 0; i < size; i++)
	{
		sum = sum + *ptr;
		ptr++;
	}
	printf("\nThe sum is: %d", sum);
}