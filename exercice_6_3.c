#include <stdio.h>

int main(){

	printf ("Pour finir ce programme , il faut mettre un 0 \n") ;
	int n ;
	int p ;
	int val ;
	n = 0 ;
	p = 0 ;
	do {
		printf ("Donnez un nombre entier ( positif ou negatif ) . \n ") ;
		scanf ("%d", &val ) ;
		if ( val == 0 ) {
			printf ("Plus grande valeur positive : %d \n", p ) ;
			printf ("Plus grande valeur negative : %d \n", n ) ;
		} if (( val < 0 )&&( val < n ))  {
			n = val ;
		} if (( val > 0 )&&( val > p )) {
			p = val ;
		}

	} while ( val != 0 ) ; 


	return 25 ;
}
