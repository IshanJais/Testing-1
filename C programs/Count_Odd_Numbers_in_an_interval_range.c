#include<stdio.h>
int main()
{
	int start, last, i,count=0;

	printf("Enter the first number:"); scanf_s("%d", &start);
	printf("\nEnter the end number:"); scanf_s("%d", &last);
	printf("\nThe total count for odd numbers between %d and %d are: ", start, last);
	for (i = start; i <= last; i++)
	{
		if (i % 2 != 0)
		{
			//for getting all numbers -
			//printf("%d", i);
			count++;
		}
	}
	printf("%d", count);
}