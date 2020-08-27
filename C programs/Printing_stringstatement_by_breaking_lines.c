#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
char main()
{
	char a[20];
	scanf_s("\n");
	scanf_s("%[^\n]%*c", &a[20]);
	printf("\nhere is the output= %s", a);
	return 0;
}