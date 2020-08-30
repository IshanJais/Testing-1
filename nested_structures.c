#include<stdio.h>
struct address //this structure holds the details of customer 
{
	char city[30];
	int zipcode;
	char phone[20];
};
struct employee
{
	char name[20];
	struct address add; //this line is connected to the structure named as address 
};
void main()
{
	struct employee emp;
	printf("\nEnter the information: ");
	scanf_s("%s %s %d %s", emp.name, emp.add.city, &emp.add.zipcode, emp.add.phone);
	printf("The entered details are below: ");
	printf("NAME: %s CITY: %s ZIPCODE: %d PHONE: %s", emp.name, emp.add.city, emp.add.zipcode, emp.add.phone);
}