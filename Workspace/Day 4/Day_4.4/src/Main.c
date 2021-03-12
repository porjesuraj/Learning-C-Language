#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//"Sandeep Kulange" 33 82.33
int main( int argc, char *argv[] )
{
	char name[ 30 ];
	strcpy(name, argv[1]);
	int rollNumber = atoi( argv[ 2 ] );
	float marks = atof( argv[ 3 ] );

	printf("%s\n", name);
	printf("%d\n", rollNumber);
	printf("%f\n", marks);
	return 0;
}
//"Sandeep Kulange" 33 82.33
int main4( int argc, char *argv[] )
{

	printf("%s\n", argv[ 1 ]);
	printf("%s\n", argv[ 2 ]);
	printf("%s\n", argv[ 3 ]);
	return 0;
}
//Hello
int main3( int argc, char *argv[] )
{
	printf("argc	:	%d\n", argc);
	//printf("%s\n", argv[ 0 ]);
	printf("%s\n", argv[ 1 ]);
	return 0;
}
int main2( int argc, char *argv[] )
{
	printf("%s\n", argv[ argc - 1 ]);	//file path
	printf("%s\n", argv[ argc ]);	//(null)
	return 0;
}
int main1( int argc, char *argv[] )
{
	printf("%d", argc);	//1
	return 0;
}
