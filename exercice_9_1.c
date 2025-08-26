#include<stdio.h>

int *pointeur1, *pointeur2;

void echange(int *pointeur1, int *pointeur2);

int main()
{

	int t[3];
	int i;
	int j;
	for (i = 0; i <= 2; i++) {
		printf("Ecrivez un nombre entier : \n");
		scanf("%d", &t[i]);
	}
	for (i = 0; i < 2; i++) {
		for (j = 1; j < 3; j++) {
			if (t[i] > t[j]) {
				echange(&t[i], &t[j]);
				echange(t + i, t + j);
			}
		}
	}
	printf("Vos nombres tries :");
	for (i = 0; i < 3; i++) {
		printf("%d \n", t[i]);
	}

	return 0;
}

void echange(int *pointeur1, int *pointeur2)
{
	int x;
	x = *pointeur1;
	*pointeur1 = *pointeur2;
	*pointeur2 = x;
}
