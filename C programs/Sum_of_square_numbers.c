//Given a non - negative integer c, your task is to decide whether there're two integers a and b such that a2 + b2 = c.

#include <stdio.h>
int main()
{
	int i, j, n;
	printf("Enter the number to check condtion satisfies or not: ");
	scanf_s("%d", &n);
	for (i = 0; i*i <= n; i++)
		for (j = 0; j*j <= n; j++)
			if ((i * i + j * j) == n)
			{
				printf("\n CONDITION SATISFIED");
			}
	printf("\nNOT SATISFIED");
}