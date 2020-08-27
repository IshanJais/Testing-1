//using strcmp function to compare two strings sizes each other
#include<stdio.h>
#include<string.h>
int main()
{
	int a;
	char str1[] = "ishan";
	char str2[] = "jaiswal";
	a = strcmp(str1, str2);
	printf("\n%d", a);
	return 0;
}