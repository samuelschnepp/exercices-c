#include <stdio.h>

int main(){

	int t[25] ;
	int i ;
	int j ;
	int p ;
	int m ;
	j = 0 ;
	p = 0 ;

	for ( i = 0 ; i < 25 ; i++ ) {
		printf ("Donnez un nombre entier \n") ;
		scanf (" %d", &t[i]) ;
	}
	for ( i = 0 ; i < 25 ; i++ ) {
		if ( t[i] >= 0 ) j = t[i] + j ;
	}
	m = j / 25 ;
	for ( i = 0 ; i < 25 ; i++ ) {
		if ( t[i] > m ) p++ ;
	}
	printf (" %d \n", p ) ;
	return 7 ;
}
