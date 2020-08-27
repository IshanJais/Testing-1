#include<stdio.h>
#include<string.h>
 char main()
{
	char k[10],A,i;
	int count = 0;
	scanf_s("%s", &k[10]);
	//scanf_s("\n");
	scanf_s("%c", &A);
	//for (i = 0; i<=10; i++)
	//{
		if (k[10]==A)
		{
			count++;
			printf("\n%d", count);
		}
	//}
	return 0;
}