#include <stdio.h>
#include <string.h>

#define gets(x) fgets(x, sizeof(x), stdin )


int main(){
	
	int i,a;
	char t[26], premier, dernier;
	premier = ' ';
	dernier = ' ';
	printf ("Donnez un mot de moins de 26 lettres : \n");
	gets (t);
	a = strlen (t);
	for ( i = 0 ; i < a ; i++ ){
		if ( i == 0 ){
			premier = t[i];
		}
		if ( i == a - 2 ){
			dernier = t[i];
		}
	}
	printf ("Voici la premiere lettre de votre mot : %c \n", premier);
	printf ("Voici la derniere lettre de votre mot : %c \n", dernier);

	return 1;
}


