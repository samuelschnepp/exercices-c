#include <stdio.h>
#include <math.h>

int main(){
	
	char oui ;
	float rayon ;
	float perimetre ;
	float aire ;
	printf (" Donnez un nombre reel : \n") ;
	scanf ("%f", &rayon ) ;
	perimetre = 2 * M_PI * rayon ;
	aire = M_PI * rayon * rayon ;
	printf ("Est-ce que vous voulez le perimetre ? oui/non \n\n ") ;
	scanf (" %c", &oui ) ;	
{
		if ( oui == 'o' )  printf (" Perimetre : %f \n ", perimetre ) ;
			else ;
}
	printf ("Est-ce que vous voulez l'aire ? oui/non \n ") ;
	scanf (" %c", &oui ) ;
{
		if ( oui == 'o')  printf (" Aire : %f \n ", aire ) ;
			else ;
}
			return 10 


				;

}



