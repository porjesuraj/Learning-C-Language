#include<stdio.h>
//void accept_record( int arr[][3], int rows, int cols )
void accept_record( int (*arr)[3], int rows, int cols )
{
	for( int row = 0; row < rows; ++ row )
	{
		for( int col = 0; col < cols; ++ col )
		{
			printf("Enter element	:	");
			scanf("%d", &arr[ row ][ col ] );
		}
	}
}
//void print_record( int arr[][ 3 ], int rows, int cols )
void print_record( int ( *arr)[ 3 ], int rows, int cols )
{
	for( int row = 0; row < rows; ++ row )
	{
		for( int col = 0; col < cols; ++ col )
		{
			printf("%d	",arr[ row ][ col ] );
		}
		printf("\n");
	}
}
int main( void )
{
	int arr[ 2 ][ 3 ];

	accept_record( arr, 2, 3 );

	print_record( arr, 2, 3 );
}
int main2( void )
{
	int arr[ 2 ][ 3 ];
	for( int row = 0; row < 2; ++ row )
	{
		for( int col = 0; col < 3; ++ col )
		{
			printf("Enter element	:	");
			scanf("%d", &arr[ row ][ col ] );
		}
	}
	for( int row = 0; row < 2; ++ row )
	{
		for( int col = 0; col < 3; ++ col )
		{
			printf("%d	",arr[ row ][ col ] );
		}
		printf("\n");
	}
}
int main1( void )
{
	int arr[ 2 ][ 3 ] = { {1,2,3},{4,5,6}};
	for( int row = 0; row < 2; ++ row )
	{
		for( int col = 0; col < 3; ++ col )
		{
			printf("%d	",arr[ row ][ col ] );
		}
		printf("\n");
	}
}

