#include <stdio.h>
	
float ex (float nombre, float exposant);

int main()
{	
	float nombre, exposant;
	printf ("Donnez deux nombres entiers (le deuxieme sera l'exposant du premier)\n");
	scanf ("%f %f", &nombre, &exposant);
	nombre = ex (nombre, exposant);
	printf ("Resultat : %f \n", nombre);

	return 0;
}

float ex (float nombre, float exposant)
{
	int i;
	for ( i = 1 ; i < exposant ; i++ )
	{
		nombre = nombre * nombre;
	}
	return nombre;
}

