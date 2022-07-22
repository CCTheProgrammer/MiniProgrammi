#include <stdlib.h>
#include <stdio.h>

void InvertiArrayIntervallo(int* v, int n, int i, int f) {  //variante di InvertiArray con la possibilita'
															//di invertire l'ordine degli elementi di un sottovettore
															//definito da un intervallo [i, f] appart. al vettore v
	if (f < n || v != NULL) {
		if (i < f) {
			int t = v[i];
			v[i] = v[f];
			v[f] = t;
			InvertiArrayIntervallo(v, n, i + 1, f - 1);
		}
	}
	return;
}