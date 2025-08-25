#include <stdio.h>
#include <strings.h>
#define LG_MAX_MOT
#define LG_MOT

#define gets(x) fgets(x, sizeof(x), stdin)

int main(){

	//char t1[26];
	char t2[26];
	int i;
	//int a;
	for ( i = 0 ; i < 26 ; i++){
		t2[i] = 0;
	}
	printf ("Donnez un mot de moins de 26 lettres : \n");			
	gets(t2);
	for ( i = 0 ; i < 26 ; i++ ){
		printf ("%c", t2[i]);
		printf ("\n");
	}	

	return 0;

}	

