#include <stdio.h>

int main(){


	int i ;
	int a ;
	printf ("Combien d'asterisques voulez-vous ?(entier) \n") ;
	scanf ("%d", &a ) ;
	for ( i = 0 ; i < a ; i++ ) {
		int k ;
		for ( k = 0 ; k < ( i * 3 ) ; k++ ) {
			printf (" ") ;
		}
	       	printf ("*") ;
		printf ("\n") ;
	}
	return 26 ;
}

		
		


		
	
