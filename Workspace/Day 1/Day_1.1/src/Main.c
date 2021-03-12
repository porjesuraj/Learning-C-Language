#include<stdio.h>
int menu_list( void )
{
	int choice;
	printf("0.Exit\n");
	printf("1.Accept Record\n");
	printf("2.Print Record\n");
	printf("Enter choice	:	");
	scanf("%d" , &choice);
	return choice;
}
int main( void )
{
	int choice;
	while( ( choice = menu_list( ) ) != 0 )
	{
		switch( choice )
		{
		case 1:
			printf("Accept Record\n");
			break;
		case 2:
			printf("Print Record\n");
			break;
		}
	}
	return 0;
}			
