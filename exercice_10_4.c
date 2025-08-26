#include <stdio.h>
#include <string.h>

#define gets(x) fgets(x, sizeof(x), stdin )		/*Ceci devait etre l'exercice 11.1.c*/
#define NB 100 						     /*Desole de l'inconvenance*/    

struct point {
	int num;
	float x;
	float y;
};
struct point tableau[NB];

int main(){
	int i;

	for (i = 0; i < NB; i ++) {
		float x, y;

		printf("%d/%d x,y: ", i, NB);
		scanf("%f %f", &x, &y);

		tableau[i].num = i;
		tableau[i].x = x;
		tableau[i].y = y;
	}	


	for (i = 0; i < NB; i ++) {
		printf("%d %f %f\n", tableau[i].num, tableau[i].x, tableau[i].y);
	}


	return 1;
}
																																																																																																																																																																																										
