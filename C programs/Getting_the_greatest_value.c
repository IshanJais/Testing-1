#include<stdio.h>
int main()
{
	int a, b, c, d;
	scanf_s("%d %d %d %d", &a, &b, &c, &d);
	if
		(a > b && a > c && a > d)
	{
		printf("\nI am the greatest= %d", a);
	}
	else if
		(b > a && b > c && b > d)
	{
		printf("\nI am the greatest= %d", b);
	}
	else if
		(c > a && c > b && c > d)
	{
		printf("\nI am the greatest= %d", c);
	}
	else if
		(d > a && d > b && d > c)
	{
		printf("\nI am the greatest= %d", d);
	}
	else 
		return 0;
}