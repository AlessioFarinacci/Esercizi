#include <stdio.h>

int main(){

	int intero1, intero2; /* inserisco le variabili */
	float somma_interi;
	float media;

	printf("Inserire il primo numero intero: "); 	/* chiedo all'utente di inserire i due interi, permettendogli di inserirli */
	scanf("%d", &intero1);
	printf("\nInserire il secondo numero intero: ");
	scanf("%d", &intero2);

	somma_interi = intero1 + intero2; /* somma degli interi */
	media = somma_interi/2; /* calcolo della media */

	printf("\nLa media di %d e %d e': %f", intero1, intero2, media); /* mostro all'utente i risultati */

	return 0;

}
