//concatinate (adds) the 2 strings upto filter by using strncat()
#include<stdio.h>
#include<string.h>
int main()
{
	char source[] = "Ishan";
	char destination[20] = "Jaiswal";
	strcat(destination, source);
	printf("\n%s", source);
	printf("\n%s", destination);
	return 0;
}