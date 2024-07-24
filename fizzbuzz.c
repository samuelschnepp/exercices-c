#include <stdio.h>

int main()
{

    int i = 0;

    while (i < 1000) {
	if (i % 3 == 0) {
	    printf("fizz");
	}
	if (i % 5 == 0) {
	    printf("buzz");
	}
	if ((i % 3 != 0) && (i % 5 != 0)) {
	    printf("%d", i);
	}
	printf("\n");
	i = i + 1;
    }
    return 1;
}
