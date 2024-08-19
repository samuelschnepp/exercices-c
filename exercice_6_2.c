#include <stdio.h>

int main(){

	printf ("Pour finir ce programme , il faut mettre un zero .\n") ;
	int v ;
	int p ;
	int n ;
	int nbp ;
	int nbn ;
	float psp ;
	float psn ;
	p = 0 ;
	n = 0 ;
	nbp = 0 ;
	nbn = 0 ;
	psp = 0 ;
	psn = 0 ;
	do {
		printf ("Donnez un entier : \n") ;
		scanf ("%d", &v ) ;
		if ( v < 0 ) {
			n++ ;
			nbn = v + nbn ;
		} else if ( v > 0 ) {
			p++ ;
			nbp = v + nbp ;
		} 
	} while ( v != 0 ) ;

	if ( n != 0 ) {
		psn = nbn / n ;
	}
	if ( p != 0 ) {
		psp = nbp / p ;
	}
	printf ("La moyenne des valeur(s) positive(s) est de : %f \n", psp ) ;
	printf ("La moyenne des valeur(s) negative(s) est de : %f \n", psn ) ;
	return 24 ;
}


