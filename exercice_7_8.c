#include <stdio.h>

int main(){

	int t[2][5] = { {2, 8, 6, 7, 9}, { 4, 3,  6, 8, 5} };
	int imax , jmax ;
	int max ;	
	int i , j ;
	max = t[0] [0] ;
	imax = 0 ;
	jmax = 0 ;
	for ( i = 0 ; i < 2 ; i++ )
	{	for ( j = 0 ; j < 5 ; j++ )
		{	if ( t[i] [j] > max ) max = t[i] [j] , imax = i , jmax = j ;
		}
	}
	printf ("La position du plus grand element est %d %d \n " , imax , jmax ) ;
	return 7 ;
}

			
