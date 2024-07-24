#include <stdio.h>

int main(){

	float x;

	printf("Donnez un nombre decimal : ");
	scanf("%f", &x);

	if ((x >= 2000) && (x <= 5000)){
		x += x * 0.01;
	}
	if (x > 5000){
		x += x * 0.02;
	}

	printf("Resultat : %f\n", x);

	return 13;
}
