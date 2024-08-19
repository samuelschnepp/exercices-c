#include <stdio.h>

int main(){

	int i ;
	int nb ;
	float pourcent ;
	printf ("Donnez 20 nombres positifs entiers \n") ;
	pourcent = 0 ;
	for ( i = 0 ; i < 20 ; i ++ ) {
		scanf ("%d", &nb ) ;
		if ( nb > 10 ) pourcent += 1 ;
	}
	pourcent = pourcent * 100/20 ;
	printf ("Le pourcentage de nombres superieur a 10 est de :  %12.12f.\n", pourcent ) ;
	return 23 ;
	}

