#include<stdio.h>
int main()
{
	int num1, num2, * a, * b, temp;
	printf("Enter the first value num1: ");
	scanf_s("%d", &num1);
	printf("Enter the second value num2: ");
	scanf_s("%d", &num2);
	printf("before swapping the numbers: %d  %d ", num1, num2);
	a = &num1;
	b = &num2;
	temp = *b;
	*b = *a;
	*a = temp;

	printf("\nAfter swapping the numbers are: %d  %d", num1, num2);
}