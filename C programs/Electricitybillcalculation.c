#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
float main()
{ 
	float a, units;
	scanf("%f", &units);
	//units = 300;
		if (units <= 50)
		{
			a = units * 0.50;
			printf("\nShow the Amount calculated: %f", a);
		}
		else if (units <= 100)
		{
			a = ((50 * 0.50) + ((units-50) * 0.75));
			printf("\nShow the Amount calculated: %f", a);
		}
		else if (units <= 150)
		{
			a = ((50 * 0.50) + (100 * 0.75) + (units-150) * 1.2);
			printf("\nShow the Amount calculated: %f", a);
		}
		else(units > 250);
		{
			a = ((50 * 0.50) + (100 * 0.75) + (150 * 1.2) + (units-250) * 1.5);
			printf("\nShow the Amount calculated: %f", a);
		}
	float x = a*0.2;
	float y = a + x;
	printf("\nAfter adding GST in your bill the final amount to be paid is = %f", y);
}