#include<stdio.h>
#include<stdlib.h>

typedef struct Employee
{
	char name[ 50 ];
	int empid;
	float salary;
}Employee_t;
void accept_record( Employee_t *ptr  )
{
	printf("Name	:	");
	scanf("%s", ptr->name);
	printf("Empid	:	");
	scanf("%d", &ptr->empid);
	printf("Salary	:	");
	scanf("%f", &ptr->salary);
}
void print_record( Employee_t *ptr  )
{
	printf("Name	:	%s\n", ptr->name);
	printf("Empid	:	%d\n", ptr->empid);
	printf("Salary	:	%f\n", ptr->salary);
}
int main( void )
{
	Employee_t emp;
	accept_record(&emp);
	print_record(&emp);
	return 0;
}
int main1( void )
{
	Employee_t *ptr = (Employee_t*)malloc( sizeof( Employee_t ) );
	if( ptr != NULL )
	{
		accept_record( ptr );

		print_record( ptr );

		free( ptr );
	}
	return 0;
}
