#include<stdio.h>
#define PI 3.1415//define preprocessor
#define circlearea(radius) (PI*(radius)*(radius))//fuction like macros
int main()
{
	float radius, area;
	printf("Enter the Radius=");
	scanf_s("%f", &radius);
	area = circlearea(radius);
	printf("Area of the circle is: %f", area);
	return 0;
}