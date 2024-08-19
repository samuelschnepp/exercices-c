#include <stdio.h>
                                                                  
int main(void) {

	float valeur ;
	float carre , cube ;
	int ent ;
	printf (" Donnez un nombre reel : ") ;
	scanf ("%e", &valeur ) ;
	carre = valeur * valeur ;
	cube = valeur * valeur * valeur ;
	printf (" La valeur %f a pour carre %f et pour cube %f \n ", valeur , carre , cube ) ;
	ent = cube ;
	printf (" La partie entiere de son cube est : %d \n ", ent ) ;

		return 1 

			;
	
}

        
