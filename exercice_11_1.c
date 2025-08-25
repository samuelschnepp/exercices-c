#include <stdio.h>

#define gets(x) fgets(x, sizeof(x), stdin )
#define NBE = 100

struct point {
	int num;
	float x;
	float y;
};
struct point t[NBE];

int main(){

	printf ("Donnez une suite de mots : \n");
	gets (*tableau);
	printf ("Voici votre suite : \n");
        for ( i = 0 ; i < NBE ; i++ ){
		printf ("%c", t[i]);
	}
	return 1;
}
			 
			



