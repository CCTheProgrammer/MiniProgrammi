#include <stdlib.h>
int CercaNumeroRec(int v[], int i, int len, int n) {
	if (i == len - 1) {  //se il contatore i è uguale a len - 1
		if (n == v[i]) { //se l'elemento che si cerca e'
						 //l'ultimo elemento del vettore parametro
			return 1;    //la funzione ricorsiva ritorna 1
		}
		else {
			return 0;    //altrimenti 0
		}
	}

	if (n == v[i]) {    //se l'elemento che si cerca si trova alla posizione
						//da 0 a len - 2, la funzione ritorna 1
		return 1;
	}

	return CercaNumeroRec(v, i + 1, len, n);  //altrimenti si continua con la ricerca dell'elemento
}

int CercaNumero(int v[], int len, int n) {
	if (v == NULL) { //in caso di vettore vuoto, la funzione ritorna 0
		return 0;
	}

	return CercaNumeroRec(v, 0, len, n); //se non è vuota, la funzione ricorsiva
										 //viene chiamata dalla funzione principale
										 //il contatore è pari a 0 per scorrere
										 //tutto il vettore in cerca dell'elemento
										 //definito con la variabile n
}