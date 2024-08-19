#include <stdio.h>

int main(){
	char c;
	int nombre = 0;
	printf ("Donnez une suite de caracteres \n ") ;
	do {
		scanf("%c", &c);
		nombre = nombre + 1;
	} while (c != '\n');
	
	printf ("nombre de caracteres : %d\n", nombre - 1);

	return 21;
}
		
