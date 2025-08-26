#include <stdio.h>
#include <string.h>

#define gets(x) fgets(x, sizeof(x), stdin ) 

int main(){

	char t1[26];
	int i;
	int LG_MOT;	
	LG_MOT = 0;
	printf ("Donnez le nombre de lettres du mot(max 26 sinon ca buggue) que vous voulez ecrire : \n");
	scanf ("%d", &LG_MOT);
	printf ("Donnez un mot de moins de %d lettres (Le reste des lettres, mettez des espaces) : \n",LG_MOT + 1);	
	for ( i = 0 ; i < LG_MOT + 1 ; i++ ){
		scanf ("%c", &t1[i]);
		}
	
	printf ("Votre mot de %d lettres \n", LG_MOT );
	for ( i = 0 ; i <= LG_MOT ; i++ ){
			printf ("%c", t1[i]);
			printf ("\n");
	}

	return 0;

}	
