#include <stdio.h>

int main()
{
	char signe;
	int a;
	int b;
	float result;
	result = 0;
	printf ("Donnez un signe operatoire : \n");
	scanf ("%c", &signe);
	printf ("Donnez deux nombres entiers : \n");
	scanf ("%d %d", &a, &b);
	switch(signe)
	{
		case '+': result = a + b;
			  break;
		case '-': result = a - b;
			  break;
		case '*': result = a * b;
			  break;
		case '%': result = a % b;
		  	  break;
		case '/': result = 1.0 * a / b;
			  break;
	}
	printf ("Voici le resultat : %f \n", result);
	return 0;
}

