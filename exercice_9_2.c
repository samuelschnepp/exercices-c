#include <stdio.h>

float maxmin(float * max,float * min,float t[], int nb_el);

int main(){
	
	float  max;
	float  min;
	float t[8];
	int nb_el;
	int i;
	max = 0;
	min = 0;
	nb_el = 8;
	for ( i = 0 ; i < nb_el ; i++ ){
		printf ("Donnez une valeur decimale : \n");
		scanf ("%f", &t[i]);
	}
	maxmin(&max,&min, t, nb_el);
	printf ("Les valeurs les plus extremes sont %f ; %f \n", max, min);

	
	return 0;
}
float maxmin(float * max,float * min,float t[], int nb_el){

	int i;
	* max = t[0];
	* min = t[0];
	for (i = 0 ; i < nb_el ; i++){
		if ( * max < t[i] ){
			* max =t[i] ;
		}
		if ( * min > t[i] ){
			* min = t[i];
			}
	}
	
	return 0;
}
	

	






