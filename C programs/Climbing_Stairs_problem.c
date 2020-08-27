#include<stdio.h>
int fib(int n);
int ways(int stairs); 
int main()
{
	int n, stairs;
	printf("Enter the number of stairs: ");
	scanf_s("%d", &stairs);
	printf("The total number of ways for stairs are: %d ", ways(stairs));
	return 0;
}
int fib(int n)
{
	if (n <= 1)
		return n;
	else
		return fib(n - 1) + fib(n - 2);
}
int ways(int stairs)
{
	return fib(stairs + 1);
}