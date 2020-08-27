#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	int x = 0;
	printf("Give the integer number to be checked: ");
	scanf_s("%d", &n);
	{
		if (n % 5 == 0)
		{
			n = n / 5;
		}
		else if (n % 3 == 0)
		{
			n = n / 3;
		}
		else if (n % 2 == 0)
		{
			n = n / 2;
		}
		else
		{
			printf("It's not ugly number");
			x = 1;
		}
	}
	if (x == 0)
	{
		printf("It's an ugly number");
	}
}