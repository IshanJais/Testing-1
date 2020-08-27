#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct car
{
	int model;
	int seats;
	float lengthofcar;
	char* company;
	char* colour;
	char* version;
}C1, C2;
int main()
{
		C1.company = "Mercede5";
		C1.colour = "Black";
		C1.model = 13;
		C1.seats = 4;
		C1.version = "Deluxe";
		C1.lengthofcar = 2.53;
		C2.company = "AstonMartin";
		C2.colour = "NavyBlue";
		C2.model = 3;
		C2.seats = 5;
		C2.version = "Standard";
		C2.lengthofcar = 2.23;
		printf(" %s  %s  %d  %d  %s  %f ",C1.company, C1.colour, C1.model,C1.seats, C1.version,C1.lengthofcar);
		printf("\n %s  %s  %d  %d  %s  %f ", C2.company, C2.colour, C2.model, C2.seats, C2.version,C2.lengthofcar);
		return 0;
}