#include<stdio.h>
int fibonacci( int );
int main( void )
{
  int i, j;
	printf("bir sayi giriniz: ");
	scanf_s ("%d", &i);
	for( j = 0; j < i; j++ ) {
		printf( "f(%d)= %d\n", j, fibonacci( j ) );
	}
	getchar();
}
int fibonacci( int eleman_no )
{
	if( eleman_no > 1 ) {
	return fibonacci( eleman_no - 1 ) + 
		fibonacci( eleman_no - 2 ) ;
	}
	else if( eleman_no == 1 )
		return 1;
	else
		return 0;
}
