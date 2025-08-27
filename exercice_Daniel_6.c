#include <stdio.h>


int main()
{
	int i;
	int a;
	printf ("Quelle table de multiplication voulez vous ? (ATTENTION : si vous mettez un gros chiffre, le programme va mettre du temps : des milliers de lignes \n");
	scanf ("%d", &a);
	for ( i = 0 ; i <= a ; i++ )
	{
		printf ("%d * %d = %d \n", a, i, a * i);
	}
	return 0;
}
