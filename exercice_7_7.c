#include <stdio.h>

int main(){

	int x[2] [3] ;
	int i , j ;
	for ( i = 0 ; i < 2 ; i++ ) 
	{	printf ("Donnez les 3 valeurs de la ligne %d \n", i ) ;
		for ( j = 0 ; j < 3 ; j++) 
		{	scanf (" %d", &x [i] [j] ) ;
		}
	}
	j = 0;
		for ( i = 0 ; i < 3 ; i++ )
	       
	{	printf ("Colonne %d : ", i ) ;
			for ( j = 0 ; j < 2 ; j++ ) 
		{	printf (" %d  \n", x[j] [i]  ) ;
		}
	}
			return 7 ;
}


