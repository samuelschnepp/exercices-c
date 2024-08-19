#include <stdio.h>

int main(){
	
	printf ("Pour finir ce programme , il faut mettre un 0 \n") ;
	int n ;
	int i ;
	i = 0 ;
	do
		{ printf ("Donnez un nombre entier : \n ") ;
		  scanf ("%d", &n ) ;
		  printf ("Voici son carre : %d \n ", n * n ) ;
		  i = i + 1 ;
		}
	while ( n != 0 ) ;
	printf ("Vous avez fourni %d valeur(s) y compris le 0 de fin \n", i ) ;

		return 19 

			 ;

}
