#include <stdio.h>
#include <string.h>

#define gets(x) fgets (x, sizeof(x), stdin )

int main(){

	char nom[20],ville[20],prenom[20],final[100] = { '\0' };
	printf ("Quelle est votre ville ? \n");
	gets (ville);
	printf ("Donnez votre nom et votre prenom \n");
	scanf ("%s %s", nom, prenom );
	strcat(strcat(strcat(strcat(strcat(final,"bonjour cher"),nom), prenom ),"qui habite a" ), ville ) ;
	
	puts (final);
	
	return 1;
}

		
