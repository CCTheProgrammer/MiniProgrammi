#include <stdlib.h>
int CercaNumeroRec(int v[], int i, int len, int n) {

	if (i < len) {  //se i � minore della lunghezza len del vettore v
		if (v[i] == n) {  //se � stato individuato l'elemento da trovare
			return 1;     //la funzione ricorsiva ritorna 1
		}
		else {
			return CercaNumeroRec(v, i + 1, len, n); //si prosegue con la ricerca
		}
	}

	return 0;  //se la ricerca non � andata a buon fine, la fz ricorsiva ritorna 0
}

int CercaNumero(int v[], int len, int n) {
	if (v == NULL) { //in caso di vettore vuoto, la funzione ritorna 0
		return 0;
	}

	return CercaNumeroRec(v, 0, len, n); //se non � vuota, la funzione ricorsiva
										 //viene chiamata dalla funzione principale
										 //il contatore � pari a 0 per scorrere
										 //tutto il vettore in cerca dell'elemento
										 //definito con la variabile n
}