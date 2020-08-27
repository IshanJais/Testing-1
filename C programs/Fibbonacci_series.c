#include<stdio.h>
int func(int);
int main()
{
	int n, i;
	int c = 0;
	printf("Upto what digit you need fibbonaci number: ");
	scanf_s("%d", &n);
	for (i = 0; i <= n; i++)
	{
		printf("\nThe fibbonaci series for %d is: %d ", n, func(c));
		c++;
	}
	return 0;
}
int func(int n)
{
	if (n == 0 || n == 1)
		return n;
	else
		return (func(n - 2) + func(n - 1));
}