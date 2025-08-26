#include <stdio.h>

#define gets(x) fgets(x, sizeof(x), stdin )
#define NBE  100

struct point {
	int num;
	float x;
	float y;
};
struct point t[NBE];

int main()
{	
	int i;
	struct point t[NBE];
	printf ("Donnez une suite de nombres : \n");
	for ( i = 0 ; i <= NBE ; i++)
	{
		scanf ("%d %f %f", &t[i].num , &t[i].x , &t[i].y);
		printf ("Voici votre suite : \n");
	}
        for ( i = 0 ; i < NBE ; i++ )
	{
		printf ("%d %f %f \n", t[i].num , t[i].x , t[i].y);
	}
	return 1;
}
			 
			



