#include <stdio.h>
#include <string.h>

#define gets(x) fgets(x, sizeof(x), stdin )

int main()
{
	char c;
	printf ("Donnez une phrase : \n");
	do 
	{
		scanf ("%c", &c);
		if ( c != 'e' )
		{
			printf ("%c",c);
		}
	}
	while (c != '\n');
	//printf ("Nombre de e : %d \n", nbe);
	return 0;
}
