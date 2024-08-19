#include <stdio.h>

int main(){

	int a ;
	int b = 100 ;
	int c = 0 ;

	printf("Donnez un nombre entier positif inferieur a 100 \n") ;
	do
{
	scanf ("%d", &a ) ;
		if (( a < b )&&( a > c )){
		       	printf ("Merci pour votre nombre %d \n", a ) ;
		} else {
			printf("SVP un nombre entier positif inferieur a 100 : \n") ;
		}
}
			while (!(( a < b )&&( a > c ))) ; 

			return 16 


				 ;

}
