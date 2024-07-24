#include <stdio.h>

int main(){


	float a;
	float b;
	float racine;

	printf("Donner les coefficiants : ");
	scanf("%e%e", &a, &b);

	if (a != 0){
		racine = -b / a;
		printf("Solution : %e.\n", racine);
	}
	if ((b == 0) && (a == 0)){
		printf("Solution indeterminee.\n");
	}
	if ((b != 0) && (a == 0)){
		printf("Pas de solution.\n");
	}

	return 1;
}
