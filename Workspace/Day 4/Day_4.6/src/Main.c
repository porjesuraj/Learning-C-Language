#include<stdio.h>
#include<stdlib.h>
int main( void )
{
	typedef struct Employee
	{
		char name[ 50 ];
		int empid;
		float salary;
	}Employee_t;

	Employee_t *ptr = (Employee_t*)malloc( sizeof( Employee_t ) );
	if( ptr != NULL )
	{
		printf("Name	:	");
		scanf("%s", ptr->name);
		printf("Empid	:	");
		scanf("%d", &ptr->empid);
		printf("Salary	:	");
		scanf("%f", &ptr->salary);

		printf("Name	:	%s\n", ptr->name);
		printf("Empid	:	%d\n", ptr->empid);
		printf("Salary	:	%f\n", ptr->salary);

		free( ptr );
	}
	return 0;
}
