#include <stdio.h>

int main(){

	float cap_ini ,
	      cap ,
	      taux ;
	int i = 0 ;
	 
		
	printf ("Donnez un capital et le taux : \n") ;
	scanf ("%e%e", &cap_ini , &taux ) ;
	cap = cap_ini ;
	do {
		i = i + 1 ;
		cap = cap * ( 1 + taux ) ; 
		printf ("Capital, a l'annee %d  : %12.2f \n", i , cap ) ;
	} while ( cap <= 2 * cap_ini ) ;
		return 20 ;

}
