#include<stdio.h>
#include<string.h>
int main( void )
{
	char src[ 8 ] = "SunBeam";
	char dest[ 8 ];
	memset(dest, '0', sizeof( char ) * 7 );
	char *str = ( char*) memcpy( dest, src, sizeof( char ) * 8 );
	printf("str	:	%s\n", dest);
	return 0;
}
int main9( void )
{
	char str[  ] = "SunBeam Infotech Pune";
	char sep[ ] = " ";
	char *token = strtok(str, sep);
	while( token != NULL )
	{
		printf("%s\n", token);
		token = strtok(NULL, sep);
	}
	return 0;
}
int main8( void )
{
	char str[  ] = "SunBeam Infotech Pune";
	char *s = strstr(str,"Infotech");
	printf("%s\n", s);
	return 0;
}
int main7( void )
{
	char str[ 8 ] = "SunBeam";
	char *s = strchr( str, 'B');
	printf("%c\n", *s);
	return 0;
}
void swap( char *ch1, char *ch2 )
{
	char temp = *ch1;
	*ch1 = *ch2;
	*ch2 = temp;
}
char* strrev( char *str )
{
	int i = 0, j = strlen( str ) - 1 ;
	while( i < j )
		swap( &str[ i ++ ], &str[ j -- ] );
	return str;
}
int main6( void )
{
	char str[ 8 ] = "SunBeam";
	printf("str	:	%s\n", str);
	char *s =  strrev( str );
	printf("str	:	%s\n", str);
	printf("str	:	%s\n", s);
	return 0;
}
int main5( void )
{
	char str1[ 8 ] = "SunBeam";
	char str2[ 8 ] = "Sunbeam";
	if( strcasecmp(str1, str2) == 0 )
		printf("Equal\n");
	else
		printf("Not Equal.\n");
	return 0;
}
int main4( void )
{
	char str1[ 8 ] = "SunBeam";
	char str2[ 8 ] = "SunBeam";
	if( strcmp(str1, str2) == 0 )
		printf("Equal\n");
	else
		printf("Not Equal.\n");
	return 0;
}
int main3( void )
{
	char str1[ 13 ] = "SunBeam";
	char str2[ 6 ] = " Pune";
	char *str = strcat(str1, str2);

	printf("str	:	%s\n", str1);
	printf("str	:	%s\n", str);
	return 0;
}
int main2( void )
{
	char src[ 8 ] = "SunBeam";
	char dest[ 8 ];
	char *str = strcpy(dest, src);
	printf("str	:	%s\n", dest);
	printf("str	:	%s\n", str);
	return 0;
}

int main1( void )
{
	char src[ 8 ] = "SunBeam";
	size_t length = strlen(src);
	printf("Length	:	%zu\n", length);
	return 0;
}
