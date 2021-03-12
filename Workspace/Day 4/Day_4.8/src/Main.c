#include<stdio.h>
#include<stdlib.h>

typedef struct Employee
{
	char name[ 50 ];
	int empid;
	float salary;
}Employee_t;
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
/*void print_employee( Employee_t *ptr  )
{
	printf("Name	:	%s\n", ptr->name);
	printf("Empid	:	%d\n", ptr->empid);
	printf("Salary	:	%f\n", ptr->salary);
}*/
void print_employee( Employee_t *ptr  )
{
	printf("%-30s%-5d%-10.2f\n", ptr->name, ptr->empid, ptr->salary);
}
void print_record( Employee_t *arr, int size )
{
	for( int index = 0; index < size; ++ index )
		print_employee(&arr[ index ] );
}
int main( void )
{
	Employee_t arr[ 3 ];
	accept_record( arr, 3 );
	print_record( arr, 3 );
	return 0;
}
