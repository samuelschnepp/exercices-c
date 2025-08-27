#include <stdio.h>
#include <string.h>

#define gets(x) fgets(x, sizeof(x), stdin )

int main()
{
	int nbe;
	char c;
	nbe = 0;
	printf ("Donnez une phrase : \n");
	do 
	{
		scanf ("%c", &c);
		if ( c == 'e' )
		{
			nbe++;
		}
	}
	while (c != '\n');
	printf ("Nombre de e : %d \n", nbe);
	return 0;
}
