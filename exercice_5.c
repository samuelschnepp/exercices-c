#include <stdio.h>

int main(){


	float valeur ;
	float TVA  ;
	int nb 	;
	printf ("Donnez deux nombres reels :\n ") ;
	scanf ("%d", &nb ) ;
	scanf ("%f", &valeur ) ;
	TVA = valeur * 12.32 / 100;
	printf (" Nombre d'articles : %d \n Prix HT : %f \n Prix TTC : %f \n " , nb , valeur , nb * ( valeur + TVA)) ;



		return 5  


				;


}	
