#include<stdio.h>
#include<stdlib.h>
int main( void )
{
	int *ptr = ( int* )malloc( sizeof( int ) * 3 );
	if( ptr != NULL )
	{
		for( int index = 0; index < 3; ++ index )
		{
			printf("Enter element	:	");
			scanf("%d", &ptr[ index ] );
		}
		for( int index = 0; index < 3; ++ index )
			printf("%d\n", ptr[ index ] );
		free( ptr );
		ptr = NULL;
	}
	else
		printf("Bad memory allocation.\n");
	return 0;
}
int main1( void )
{
	int *ptr = (int*)malloc( sizeof( int ) * 1 );
	if( ptr != NULL )
	{
		*ptr = 125;
		printf("Value	:	%d\n", *ptr);
		free( ptr );
		ptr = NULL;
	}
	else
		printf("Bad memory allocation.\n");
	return 0;
}

