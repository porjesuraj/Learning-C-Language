#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct Student
{
	char name[ 50 ];
	int rollNumber;
	float marks;
}Student_t;
void write_record( const char *filename )
{
	FILE *fp  = fopen(filename, "wb");
	if( fp != NULL )
	{
		Student_t student[] = { { "Sandeep", 12, 82.45f },{"Amit",13,50.33f},{"Nilesh",11,60}};
		fwrite(student, sizeof( Student_t ), 3, fp);
		fclose(fp);
	}
	else
		printf("File IO Error\n");
}
void read_record( const char *filename )
{
	FILE *fp  = fopen(filename, "rb");
	if( fp != NULL )
	{
		Student_t student[ 3 ];
		fread(student, sizeof( Student_t ), 3, fp);
		for( int index = 0; index < 3; ++ index )
			printf("%-15s%-5d%-5.2f\n", student[ index ].name, student[ index ].rollNumber, student[ index ].marks);
		fclose(fp);
	}
	else
		printf("File IO Error\n");
}
int menu_list( void )
{
	int choice;
	printf("0.Exit\n");
	printf("1.Write Record\n");
	printf("2.Read Record\n");
	printf("Enter choice	:	");
	scanf("%d", &choice);
	return choice;
}
int main( void )
{
	int choice;
	const char *filename = "Student.dat";
	while( ( choice = menu_list( ) ) != 0 )
	{
		switch( choice )
		{
		case 1:
			write_record( filename );
			break;
		case 2:
			read_record( filename );
			break;
		}
	}
	return 0;
}
