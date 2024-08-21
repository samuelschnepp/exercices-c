#include <stdio.h>

int main(){

	int t[20];
	int i ;
	int max ;
	int position ;
	position = 0 ;
	max = 0 ;
	for ( i = 0 ; i < 20 ; i++ ){
		printf ("Donnez un nombre entier : \n") ;
		scanf (" %d" , &t[i] );
	}
	for ( i = 0 ; i < 20 ; i++ ){
		if (t[i] > max ){
		       	position = i ;
			max = t[i] ;
		}
	}
	printf ("La position de la plus grande valeur est  %d \n", position + 1 ) ;
	return 7 ;
}
			

