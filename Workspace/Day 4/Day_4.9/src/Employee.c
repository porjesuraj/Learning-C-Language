#include<stdio.h>
#include"../include/Employee.h"
void accept_employee( Employee_t *ptr  )
{
	printf("Name	:	");
	scanf("%s", ptr->name);
	printf("Empid	:	");
	scanf("%d", &ptr->empid);
	printf("Salary	:	");
	scanf("%f", &ptr->salary);
}
void accept_record( Employee_t *arr, int size )
{
	for( int index = 0; index < size; ++ index )
		accept_employee(&arr[ index ] );
}
void print_employee( Employee_t *ptr  )
{
	printf("%-30s%-5d%-10.2f\n", ptr->name, ptr->empid, ptr->salary);
}
void print_record( Employee_t *arr, int size )
{
	for( int index = 0; index < size; ++ index )
		print_employee(&arr[ index ] );
}
