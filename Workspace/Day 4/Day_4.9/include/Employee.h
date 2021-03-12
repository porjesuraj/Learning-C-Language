#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

typedef struct Employee
{
	char name[ 50 ];
	int empid;
	float salary;
}Employee_t;

void accept_employee( Employee_t *ptr  );
void accept_record( Employee_t *arr, int size );
void print_employee( Employee_t *ptr  );
void print_record( Employee_t *arr, int size );
#endif /* EMPLOYEE_H_ */
