#include<stdio.h>
#include<math.h>
int main()
{
	int A = 50;
	int B = 60;
	A = A + B;
	B = A - B;
	A = A - B;
	printf("\nprint the value A is = %d",A);
	printf("\nprint the value B is = %d", B);
}