#include <stdio.h>

int main(){
	
	int max;
	int nb;
	int i;
	printf ("Donnez une valeur initiale et un nombre de valeurs : \n") ;
	scanf ("%d%d", &nb , &max ) ;
	for ( i = 0 ; i < max ; i ++) {
		printf ("%d \n", nb + i ); 
	}
		return 22 ;
}
