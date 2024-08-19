#include <stdio.h>

int main(){

	float valeur = 42.15 ;
	float TVA = valeur * 12.32 / 100 ;
	int nb = 5  ;
	printf (" nombre articles : %d \n prix HT : %f \n prix TTC : %f \n  "  , nb , valeur , nb *( valeur + TVA ));



		return 3   ;


			


}

