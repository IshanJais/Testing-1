#include<stdio.h>
#include<math.h>
float main()
{
	float a,d, e;
	printf("\nGive the base number:");
	scanf_s("%f", &a);
	printf("\nNow give me power:");
	scanf_s("%f", &d);
	e = pow(a, d);
	printf("\nThe final answer is= %f", e);
}