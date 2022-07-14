#include <stdio.h>

int main(){

	int x, y, z;

	/* x e' il numero scelto dall'utente,
	   y e' quello immediatamente piu' piccolo di x,
	   mentre z e' quello immediatamente piu' grande di x */

	printf("Inserire un numero: ");
	scanf("%d", &x);

	y = x-1;
	z = x+1;

	printf("\nIl numero immediatamente piu' piccolo e immediatamente piu' grande di %d sono: %d e %d.", x, y, z);

	return 0;
}
