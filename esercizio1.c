#include <stdio.h>

int main(){

	int numero, incremento, decremento; /* inserisco le variabili */

	printf("Inserire un numero: "); /* mostro all'utente la richiesta di inserire il numero */
	scanf("%d", &numero);		/* ed inserisco il comando per far inserire l'intero all'utente */

	decremento = numero - 1; /* inserisco le operazioni per il calcolo dell'incremento e decremento */
	incremento = numero + 1;

	printf("\nIl numero immediatamente piu' piccolo e immediatamente piu' grande di %d sono: %d e %d.", numero, decremento, incremento);
	/* mostro all'utente i risultati calcolati */

	return 0;

}
