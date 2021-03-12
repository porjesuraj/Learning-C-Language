#include<stdio.h>
#include<stdlib.h>
int main( void )
{
	int *ptr = ( int* )calloc(3, sizeof( int ) );
	printf("%p\n", ptr);
	if( ptr != NULL )
	{
		ptr[ 0 ] = 10;
		ptr[ 1 ] = 20;
		ptr[ 2 ] = 30;
		for( int index = 0; index <  3; ++ index )
			printf("%d\n", ptr[ index ] );
		ptr = (int*)realloc(ptr,  5 * sizeof( int) );
		printf("%p\n", ptr);
		if( ptr != NULL )
		{
			ptr[ 3 ] = 40;
			ptr[ 4 ] = 50;
			for( int index = 0; index <  5; ++ index )
				printf("%d\n", ptr[ index ] );
			free( ptr );
			ptr = NULL;
		}
		else
			printf("Bad memory allocation.\n");
	}
	else
		printf("Bad memory allocation.\n");
	return 0;
}
int main3(void)
{
	int **ptr = (int**)malloc(3 * sizeof(int*));
	for( int i = 0; i <3; ++ i )
	    ptr[i] = (int*)malloc( 4 * sizeof(int));

	for( int row = 0; row < 3; ++ row )
	{
		for( int col = 0; col < 4; ++ col )
		{
			printf("Enter element	:	");
			scanf("%d", &ptr[ row ][ col ] );
		}
	}
	for( int row = 0; row < 3; ++ row )
	{
		for( int col = 0; col < 4; ++ col )
		{
			printf("%d	", ptr[ row ][ col ] );
		}
		printf("\n");
	}

	for( int i = 0; i <3; ++ i )
	    free( ptr[i] );
	free( ptr );
	ptr = NULL;
	return 0;
}

int main2( void )
{
	int *ptr = ( int* )calloc(3, sizeof( int ) );
	if( ptr != NULL )
	{
		ptr[ 0 ] = 10;
		ptr[ 1 ] = 20;
		ptr[ 2 ] = 30;
		for( int index = 0; index < 3; ++ index )
			printf("%d\n",ptr[ index ] );
		free( ptr );
		ptr = NULL;
	}
	else
		printf("Bad memory allocation\n");
	return 0;
}
int main1( void )
{
	int *ptr = ( int* )calloc(1, sizeof( int ) );
	if( ptr != NULL )
	{
		*ptr = 125;	//Dereferencing
		printf("Number	:	%d\n", *ptr);
		free( ptr );
		ptr = NULL;
	}
	else
		printf("Bad memory allocation\n");
	return 0;
}
