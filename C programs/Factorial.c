#include<stdio.h>
int factorial(int);
int main()
{
	int n, i, answer;
	printf("Enter the the number you want to find the factorial of: ");
	scanf_s("%d", &n);
	answer = factorial(n);
	printf("\nThe factorial of %d is: %d", n, answer);
	
}
int factorial(int n)
{
	if (n == 0)
		return 1;
	else if (n == 1)
		return 1;
	else
		return (n * factorial(n - 1));

}