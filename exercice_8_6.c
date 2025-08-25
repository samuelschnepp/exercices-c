#include<stdio.h>

int main(){

	int t[10];
	int i;
	int max_tab = 0;
	
	for (i=0 ; i<10 ;i++){
		printf("Donnez un nombre entier :    \n" );
		scanf("%d",&t[i]);
		if (t[i] > max_tab ) max_tab = t[i];

		}
	printf("Le nombre %d est le plus grand \n au revoir\n",max_tab);

	return 1;
}


