#include <stdio.h>

int main(){

	int nl ;	
	int i ;
	int e ;
	printf (" Combien de lignes d' asterisques voulez-vous ? ( un entier ) \n ") ;
	scanf ("%d" , &nl) ;
       	for ( i = 1 ; i <= nl ; i++ ){
		for ( e = 1 ; e <= i ; e++ ){
			printf ("*") ;
		}
		printf (" \n") ;
	}
	return 1 ;
}

	
			

