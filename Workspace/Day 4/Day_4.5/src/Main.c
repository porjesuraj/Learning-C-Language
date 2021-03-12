#pragma pack(1)
#include<stdio.h>
int main( void )
{
	typedef struct Employee
	{
		char name[ 50 ];
		int empid;
		float salary;
	}Employee_t;
	//Employee_t emp;	//Ok
	//Employee_t emp = { "Sandeep", 33, 45000.50f };	//Ok

	Employee_t emp;
	printf("Name	:	");
	scanf("%s", emp.name);
	printf("Empid	:	");
	scanf("%d", &emp.empid);
	printf("Salary	:	");
	scanf("%f", &emp.salary);

	printf("Name	:	%s\n", emp.name);
	printf("Empid	:	%d\n", emp.empid);
	printf("Salary	:	%f\n", emp.salary);
	return 0;
}
