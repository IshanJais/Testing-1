#include<stdio.h>
#include<string.h>
#define strrev()
int main() {
	char s[10];
	printf("Enter a string to reverse\n");
	scanf_s("%s", &s);
	strrev(s);
	printf("Reverse of the string: %s\n", s);
	return 0;
}