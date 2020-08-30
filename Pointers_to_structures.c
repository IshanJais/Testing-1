#include<stdio.h>
struct cars
{
	int carno;
	float length;
	char name;
};
int main()
{
	struct cars *carPtr, C1;
	carPtr = &C1;
	printf("Enter the car name of C1: ");
	scanf_s("%s", &carPtr->name);
	printf("Enter the car number of C1: ");
	scanf_s("%d", &carPtr->carno);
	printf("Enter the car length of C1: ");
	scanf_s("%f", &carPtr->length);

	printf("\n\n\nAll Details of cars are given below: ");
	printf("\nCar Name C1: ", carPtr->name);
	printf("\nCar Number C1: ", carPtr->carno);
	printf("\nCar Length C1: ", carPtr->length);

	return 0;


}