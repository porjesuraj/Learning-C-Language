#include<stdio.h>
size_t string_length( char *str )
{
	int index = 0;
	while( str[ index ] != '\0')
		++ index;
	return index;
}
char* string_copy(char *dest, const char *src)
{
	int index = 0;
	while( src[ index ] != '\0')
	{
		dest[ index ] = src[ index ];
		++ index;
	}
	dest[ index ] = '\0';
	return dest;
}
char* string_concat(char *s1, const char *s2)
{
	int i = 0;
	while( s1[ i ] != '\0')	++i;
	int j = 0;
	while( s2[ j ] != '\0')	s1[ i ++] = s2[ j ++ ];
	s1[ i ] = '\0';
	return s1;
}
char* upper_case( char *str )
{
	int index = 0;
	while( str[ index ] != '\0')
	{
		int value = str[ index ];
		if( value >= 97 )
			str[ index ] = str[ index ] - 32;
		++ index;
	}
	return str;
}
char* lower_case( char *str )
{
	int index = 0;
	while( str[ index ] != '\0')
	{
		int value = str[ index ];
		if( value <= 90 )
			str[ index ] = str[ index ] + 32;
		++ index;
	}
	return str;
}
int main( void )
{
	char str[ ] = "DaC";
	printf("%s\n",str);
	char *s = lower_case(str);
	printf("%s\n",s);
	return 0;
}
int main4( void )
{
	char str[ ] = "dac";
	printf("%s\n",str);
	char *s = upper_case(str);
	printf("%s\n",s);
	return 0;
}
int main3( void )
{
	char str1[ 13 ] = "SunBeam";
	char str2[ 5 ] = " Pune";
	char *str = string_concat(str1, str2);
	printf("%s\n",str1);
	printf("%s\n",str);
	return 0;
}
int main2( void )
{
	char src[ 8 ] = "SunBeam";
	char dest[ 8 ];
	char *str = string_copy( dest, src );
	printf("%s\n", dest);
	printf("%s\n", str);
	return 0;
}
int main1( void )
{
	char str[ 8 ] = "SunBeam";
	size_t length = string_length( str );
	printf("Length	:	%zu\n", length);
	return 0;
}
