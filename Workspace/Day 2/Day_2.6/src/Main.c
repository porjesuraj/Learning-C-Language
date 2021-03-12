#include<stdio.h>
double sum( int num1, float num2, double num3 )
{
	double result;
	result = num1 + num2 + num3;
	return result;
}
int main( void )
{
	typedef double (*FunPtr)( int , float , double  ) ;
	FunPtr ptrSum = sum;
	double result = ptrSum( 10, 20.2f,30.5);
	printf("Result	:	%lf\n", result);
	return 0;
}
int main3( void )
{
	double (*ptr)( int , float , double  ) = NULL;
	ptr = sum;
	double result = ptr( 10, 20.2f,30.5);
	printf("Result	:	%lf\n", result);
	return 0;
}
int main2( void )
{
	double (*ptr)( int , float , double  ) = NULL;
	ptr = &sum;
	double result = (*ptr)( 10, 20.2f,30.5);
	printf("Result	:	%lf\n", result);
	return 0;
}
int main1( void )
{
	double result = sum( 10, 20.1f, 30.2 );
	printf("Result	:	%lf\n", result);
	return 0;
}
