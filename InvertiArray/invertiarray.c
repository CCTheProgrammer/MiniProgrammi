#include <stdlib.h>

void InvertiArrayRec(int v[], int len, int inizio, int fine) {
	if (fine < len) {  //se la var. fine e' minore della lunghezza del vettore
					   //e' possibile invertire l'ordine degli elementi del vettore
		if (inizio < fine) {  //se la var. inizio e' minore di fine, prima dello scambio
			int t = v[inizio]; //si assegna a t l'inizi-esimo elemento, per non perderlo
			v[inizio] = v[fine]; //il fine-esimo elemento prende il posto dell'inizi-esimo elemento
			v[fine] = t;         //t che contiene l'inizi-esimo elemento
								 //prende il posto del fine-esimo elemento
			InvertiArrayRec(v, len, inizio + 1, fine - 1); //la fz. chiama se' stessa scorrendo contemporaneamente
														   //il vettore in avanti, incr. di 1 inizio e
														   //all'indietro, decr. di 1 fine
		}
		return; // se inizio e fine si coincidono l'operazione dell'inversione ordine elementi del vettore
				// si conclude e si torna alla fz. di controllo senza ritornare niente essendo una fz. void
	}
	return;   //se la var. fine non e' minore della lunghezza, non viene eseguita l'inversione ordine elementi del
			  //vettore parametro
}

void InvertiArray(int v[], int len) {
	if (v == NULL) {  //se il vettore e' vuoto,
		return;       //la fz. di controllo non ritorna nulla e si torna al main
	}

	InvertiArrayRec(v, len, 0, len - 1); //in caso contrario viene invocata dalla fz. di controllo
										 //la fz. ricorsiva che svolge l'operazione principale
										 //dell'inversione dell'ordine degli elementi del vettore parametro v,
										 //inserendo opportunamente come parametri addizionali 0 e len-1
										 //che permettono alla fz. ricorsiva il doppio scorrimento del vettore (normale e inverso)
										 //che a loro volta permettono lo scambio tra l'inizi-esimo el. e il fine-esimo el.
}