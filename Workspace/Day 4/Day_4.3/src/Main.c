#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main( void )
{
	char *str[ 4 ];
	for( int index = 0; index < 4; ++ index )
		str[ index ] = ( char*) calloc( 8, sizeof(char));

	strcpy( str[ 0 ], "Dac");
	strcpy( str[ 1 ], "Dmc");
	strcpy( str[ 2 ], "Desd");
	strcpy( str[ 3 ], "Precat");

	for( int index = 0; index < 4; ++ index )
			printf("%s\n", str[ index ] );

	for( int index = 0; index < 4; ++ index )
		free( str[ index ] );
	return 0;
}
int main4( void )
{
	char *str = ( char*) calloc( 4, sizeof(char));
	strcpy(str, "Dac");
	printf("%s\n",str);
	free( str );
	return 0;
}
int main3( void )
{
	char str[ 4 ][ 7 ];
	for( int index = 0; index < 4; ++ index )
	{
		printf("Enter string	:	");
		scanf("%s",str[ index ] );
	}
	for( int index = 0; index < 4; ++ index )
		printf("%s\n", str[ index ] );
	return 0;
}


int main2( void )
{
	char str[ 4 ][ 7 ];
	strcpy( str[ 0 ], "Dac");
	strcpy( str[ 1 ], "Dmc");
	strcpy( str[ 2 ], "Desd");
	strcpy( str[ 3 ], "Precat");
	for( int index = 0; index < 4; ++ index )
		printf("%s\n", str[ index ] );
	return 0;
}

int main1( void )
{
	char str[ 4 ][ 7 ] = { "Dac", "Dmc", "Desd", "Precat"};
	for( int index = 0; index < 4; ++ index )
		printf("%s\n", str[ index ] );
	return 0;
}
