//studing about all the storage class specifiers>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#include<stdio.h>


//use of "auto" storage class->
/*int main()
{
	int a;
	{
		int a = 1;
		{
			int a = 2;
			{
				int a = 3;
				printf("\nThe first value is: %d", a);
			}
			printf("\nThe second value is: %d", a);
		}
		printf("\nThe last value is: %d", a);
	}
}*/


//Use of "extern" storage class->
/*extern G;
int main()
{
	printf("\nThe value by using extern for variable G is : %d", G);
	return 0;
}*/



//Use of "static" storage class->
/*void ishan(void);
static int A = 10;
int main()
{
	while (A < 24)
	{
		ishan();
		A++;
	}
	return 0;
}
void ishan(void)
{
	static int jaiswal = 15;
	jaiswal++;
	printf("The jaiswal is %d and ishan is %d\n", jaiswal, A);
}*/



//use of "register" storage class->
/*int main()
{
	register int ishan = 500;
	//int* ptr = ishan;// will not execute
	printf("The output for register storaage class is %d", ishan);
	return 0;
}*/