#include<stdio.h>

int main(){


	int t[3];
	int attente;
	int i;
	int j;
	for (i=0; i<=2; i++){
		printf ("Ecrivez un nombre entier : \n");
		scanf ("%d", &t[i]);
	}
	for (i=0; i<=1; i++){
		for (j=0; j<=2; j++){
			if(t[i]>t[j]){
				attente = t[i];
				t[i] = t[j];
				t[j] = attente;
			}
		}
	}
	void echange (int * pointeur1, int * pointeur2);
	printf ("Vos nombres tries :%d \n",t[i]);

       	for (i=0; i<=2; i++){

	printf ("%d \n",t[i]);
	}



}
void echange (int * pointeur1, int * pointeur2){
	int x ;
	x = * pointeur1 ; 
	* pointeur1 = * pointeur2 ;
	* pointeur2 = x ;

	return  ;
}

