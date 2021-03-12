#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct Student
{
	char name[ 50 ];
	int rollNumber;
	float marks;
}Student_t;
void print_student( Student_t *ptr)
{
	printf("%-15s%-5d%-5.2f\n",ptr->name, ptr->rollNumber, ptr->marks);
}
void print_record( Student_t *arr, int size )
{
	for( int index = 0; index < size; ++ index )
		print_student(&arr[ index ] );
}
int compare_by_name(const void *p1, const void *p2)
{
	const Student_t *s1 = (const Student_t*)p1;
	const Student_t *s2 = (const Student_t*)p2;
	return strcmp(s1->name, s2->name);
}
int compare_by_rollnumber(const void *p1, const void *p2)
{
	const Student_t *s1 = (const Student_t*)p1;
	const Student_t *s2 = (const Student_t*)p2;
	if( s1->rollNumber < s2->rollNumber )
		return -1;
	else if( s1->rollNumber > s2->rollNumber )
		return 1;
	else
		return 0;
}
int compare_by_marks(const void *p1, const void *p2)
{
	const Student_t *s1 = (const Student_t*)p1;
	const Student_t *s2 = (const Student_t*)p2;
	if( s1->marks < s2->marks )
		return -1;
	else if( s1->marks > s2->marks )
		return 1;
	else
		return 0;
}
int main( void )
{
	Student_t arr[ 3 ] = {
							{"Sandeep",13,50.45f},
							{"Amit",12,80.00f},
							{"Nilesh",11, 65.50f}
						};

	//print_record( arr, 3 );
	//qsort(arr, 3, sizeof(Student_t), compare_by_name);
	//qsort(arr, 3, sizeof(Student_t), compare_by_rollnumber);
	qsort(arr, 3, sizeof(Student_t), compare_by_marks);
	print_record( arr, 3 );
	return 0;
}
