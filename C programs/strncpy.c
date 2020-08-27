//using strncpy function to give limit also while coping from one to another
#include<stdio.h>
#include<string.h>
int main()
{
	char source[] = "ishan jaiswal";
	char destination[10];
	strncpy(destination, source, 3);
	destination[3] = '\0';
	printf("\n%s", destination);
	printf("\n%s", source);
	return 0;
}