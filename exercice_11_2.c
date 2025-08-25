#include <stdio.h>

#define gets(x) fgets(x, sizeof(x), stdin )

struct enreg {
	char t[20];
};
struct enreg m;


int main(){
	
	void lire (struct enreg);
	void ecrire (struct enreg);
	//struct enreg m;
	printf ("Donnez un mot de moins de 20 lettres : \n");
	lire (m);
	ecrire (m);

	return 1;
}
void lire(struct enreg y){
	gets(m.t);
	
}

void ecrire(struct enreg y){
	int i; 
	for ( i = 0 ; i < 20 ; i++ ){
		printf ("%c \n", m.t[i]);
	}
		
}
