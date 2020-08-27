//using strcpy function to copy a strin to another
#include<stdio.h>
#include<string.h>
int main()
{
	char source[] = "Ishan Jaiswal";
	char destination[10];
	strcpy(destination, source);
	printf("\n%s", source);
	printf("\n%s", destination);
	return 0;
}