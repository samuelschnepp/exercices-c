#include <stdio.h>

int triangle( int nl){

	int i ;
	int e ;
	int c3 ;	
	for ( i = 1 ; i <= nl ; i++ ){
		for (  e = 1 ; e <= i ; e++ ){
			for ( c3 = 1 ; c3 <= e ; c3++ ){
				printf ("*") ;
			}
			printf ("\n") ;
	
	
	
		}
	}

	return 0;
}
int main(){

	int nl ;
	printf ("Donnez un nombre entier de lignes : \n") ;
	scanf ("%d", &nl ) ;
	 triangle( nl) ;
	}	


