//using strchr function to get whoole string after that charcter you have given
#include<stdio.h>
#include<string.h>
int main()
{
	char str[] = "ishanjaiswal";
	char c = 'a';
	char* p;
	p = strchr(str, c);
	printf("\n%s", p);
	return 0;
}