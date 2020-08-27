#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char b[10], a, s[10];
	scanf("%c", &a);
	scanf("\n%s", &b[10]);
	scanf("\n");
	scanf("%[^\n]%*c", &s[10]);
	printf("\n%c", a);
	printf("\n%s", b);
	printf("\n%s", s);
	return 0;
}