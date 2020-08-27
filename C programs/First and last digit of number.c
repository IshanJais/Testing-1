#include <stdio.h>
int main()
{
	int a, number, last, x;
	printf("Enter the number:");
	a = 98567;
	number = a;
	last = a % 10;
	printf("\nThe last digit of the number is = %d", last);
	while (number >= 10)
	{
		number = number/ 10;
	}
	printf("\nThe first digit is = %d", number);
	x = last + number;
	printf("\nThe sum of both is= %d", x);
}