#include <stdio.h>

int main(){ /* programma che restituisce se l'intero inserito e' positivo o negativo. Si ipotizza che 0 appartiene ai positivi */


	int intero; //variabili

	printf("Inserire il numero intero: "); //chiedo un intero all'utente
	scanf("%d", &intero); //inserisce il valore

	if(intero >= 0){

		printf("\n%d e' positivo", intero); //stampa positivo in caso di numero >= 0.
	}

	else{

		printf("\n%d e' negativo", intero); //stampa negativo in caso di numero < 0.
	}

	return 0;

}
