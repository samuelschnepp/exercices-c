#include <stdio.h>

int main()
{
	int fizz;
	int buzz;
	int i;
	fizz = 3;
	buzz = 5;
	for ( i = 0 ; i < 100 ; i++ )
	{
		printf ("%d", i);
		if ( i % fizz == 0 )
		{
			printf (" fizz");
		}
		if ( i % buzz == 0 )
		{
			printf (" buzz");
		}
		printf ("\n");
	}
	return 0;
}



