#include<stdio.h>

//void accept_record( int arr[ 3 ], int size )
//void accept_record( int arr[  ], int size )
void accept_record( int *arr, int size )
{
	for( int index = 0; index < size; ++ index )
	{
		printf("Enter element	:	");
		scanf("%d", &arr[ index ] );
	}
}
//void print_record( int arr[ 3 ], int size )
//void print_record( int arr[  ], int size )
void print_record( int *arr, int size )
{
	for( int index = 0; index < size; ++ index )
		printf("%d\n", arr[ index ] );
}
int main( void )
{
	int arr[ 3 ];

	accept_record( arr, 3  );

	print_record( arr, 3 );
	return 0;
}
int main3( void )
{
	int arr[ 3 ];
	for( int index = 0; index < 3; ++ index )
	{
		printf("Enter element	:	");
		scanf("%d", &arr[ index ] );
	}
	for( int index = 0; index < 3; ++ index )
		printf("%d\n", arr[ index ] );
	return 0;
}
int main2( void )
{
	int arr[ 3 ] = { 10, 20, 30 };
	for( int index = 0; index < 3; ++ index )
		printf("%d\n", arr[ index ] );
	return 0;
}

int main1( void )
{
	int arr[ 3 ];
	arr[ 0 ] = 10;
	arr[ 1 ] = 20;
	arr[ 2 ] = 30;
	printf("%d\n", arr[ 0 ] );
	printf("%d\n", arr[ 1 ] );
	printf("%d\n", arr[ 2 ] );

	return 0;
}
