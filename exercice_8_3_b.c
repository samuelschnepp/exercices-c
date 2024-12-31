#include <stdio.h>

void triangle(int nl);

int main(){
	int nl ;	

	printf (" Combien de lignes d' asterisques voulez-vous ? ( un entier ) \n ") ;
	scanf ("%d" , &nl) ;
	triangle (nl);

	return 0;
}

void triangle(int nl) {
	int i;
	int e;

       	for ( i = 1 ; i <= nl ; i++ ){
		for ( e = 1 ; e <= i ; e++ ){
			printf ("*") ;
		}
		printf (" \n") ;
	}
}
