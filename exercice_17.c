#include <stdio.h>

int main(){

	float cap_ini ,
      	      cap ,
	      taux ;
	printf ("Donnez un capital a placer et un taux : \n") ;
	scanf ("%f%f", &cap_ini , &taux ) ;
	cap = cap_ini ;
	do
{		cap = cap * ( 1 + taux )  ;
		printf ("Capital un an plus tard : %12.2f \n", cap ) ;
	       }
	while ( cap <= 2 * cap_ini ) ;
		
		return 17 

			
			;

}


