#include<stdio.h>
int main( void )
{
	const int number = 10;

	const int *ptr1 = &number;
	//*ptr1 = 50;	//Not OK
	printf("Number	:	%d\n", *ptr1);

	int *ptr2 = (int*)&number;
	*ptr2 = 50;	//Not OK
	printf("Number	:	%d\n", *ptr2);
	return 0;
}
int main5( void )
{
	int number = 10;

	int *ptr1 = &number;
	*ptr1 = 50;
	printf("Number	:	%d\n", *ptr1);	//50

	const int *ptr2 = &number;
	//*ptr2 = 60;	//Not OK
	printf("Number	:	%d\n", *ptr2);	//60

	return 0;
}
int main4( void )
{
	const int num1 = 10;
	const int *const ptr = &num1;
	//*ptr = 50;	//Not OK
	printf("Num1	:	%d\n", *ptr);

	const int num2 = 20;
	//ptr = &num2;	//Not OK
	return 0;
}
int main3( void )
{
	int num1 = 10;
	int *const ptr = &num1;
	*ptr = 50;
	printf("Num1	:	%d\n", *ptr);

	int num2 = 20;
	//ptr = &num2;	//Not OK
	return 0;
}
int main2( void )
{
	const int const *ptr = NULL;

	const int num1 = 10;
	ptr = &num1;
	//*ptr  = 50;	//Not OK
	printf("Num1	:	%d\n", *ptr);	//OK	:	10

	const int num2 = 20;
	ptr = &num2;
	//*ptr  = 60;	//Not OK
	printf("Num2	:	%d\n", *ptr);	//OK	:	20
	return 0;
}
int main1( void )
{
	int *ptr = NULL;
	int num1 = 10;
	ptr = &num1;
	*ptr = 50;
	printf("Num1	:	%d\n", *ptr);

	int num2 = 20;
	ptr = &num2;
	*ptr = 60;
	printf("Num2	:	%d\n", *ptr);
	return 0;
}
