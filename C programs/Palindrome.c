#include <stdio.h>
int main()
{
	int a, number, last, x;
	printf("Enter the number:");
	a = 48564;
	number = a;
	last = a % 10;
	printf("\nThe last digit of the number is = %d", last);
	while (number >= 10)
	{
		number = number / 10;
	}
	printf("\nThe first digit is = %d", number);
	//comparing via loop of

	if
		(number == last)
	{printf("\nIT'S PALINDROME"); }
	else
	{
		printf("\nISN'T PALINDROME");
	}
}