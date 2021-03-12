#include<stdio.h>
typedef enum IOOperation
{
	EXIT, ACCEPT_RECORD, PRINT_RECORD
}IOOperation_t;
IOOperation_t menu_list( void )
{
	IOOperation_t choice;
	printf("0.Exit\n");
	printf("1.Accept Record\n");
	printf("2.Print Record\n");
	printf("Enter choice	:	");
	scanf("%d" , &choice);
	return choice;
}
int main( void )
{
	IOOperation_t choice;
	while( ( choice = menu_list( ) ) != EXIT )
	{
		switch( choice )
		{
		case ACCEPT_RECORD:
			printf("Accept Record\n");
			break;
		case PRINT_RECORD:
			printf("Print Record\n");
			break;
		}
	}
	return 0;
}
