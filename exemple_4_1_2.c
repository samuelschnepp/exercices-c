#include <stdio.h> 

int main(){


	int n , p , maxi ;
	printf ("Donnez deux nombres entiers : ") ;
	scanf ("%d%d", &n , &p ) ;
	if (n < p ) 
		{ maxi = p ;
		  printf (" croissant \n ") ;
		}
	       else 
		{ maxi = n ;
		  printf (" non croissant \n ") ;
		}
	printf (" Le plus grand des nombres est : %d \n" , maxi) ;


		return 8 

			
			;

}

