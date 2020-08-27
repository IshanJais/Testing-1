#include <stdio.h>
int main()
{
	//setvbuf(stdout, NULL, _IONBF, 0);
	//setvbuf(stderr, NULL, _IONBF, 0);

	int n, x, y, z;
	printf("Enter the last digit of your array:");
	scanf_s("%d", &n);
	x = n + 1;
	y = x / 2;
	z = n * y;
	//a=(n*((n+1)/2));
	printf("the overall sum of your array is here:%d", z);
}