//Calculation of string length using strlen()
#include <stdio.h>
#include <string.h>
int main()
{
	char a[10];
	int len;

	printf("Enter a string to calculate its length\n");
	scanf("%s",a);
	      //fgets(a, 10, stdin);

	len = strlen(a);
	fgets(a, 10, stdin);
	printf("Length of the string = %d\n", len);

	return 0;
}