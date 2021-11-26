#include <stdlib.h>
#include <stdio.h>

void DivisioneRec(unsigned int n, unsigned int d, unsigned int num_sub, unsigned int* s, unsigned int* resto)
{
	if (n == 0 || n < d) {								// se numeratore < denominatore o il numeratore è 0
		*s = num_sub;									// la funzione copia il numero di sottrazioni (quoziente) in s,
		*resto = n;										// il resto in resto e il programma e la ricorsione finiscono
		return;
	}

 	DivisioneRec(n - d, d, num_sub + 1, s, resto);		//la funzione chiama "se stessa" per eseguire ulteriori divisioni tramite
														//le sottrazioni, aumentando di 1 il numero di sottrazioni e sottraendo
														//dal denominatore il numeratore e il risultato diventa il nuovo
														//numeratore
}

unsigned int *Divisione(unsigned int n, unsigned int d) {
	unsigned int s = 0, resto = 0;						//inizializzazione variabili ausiliarie (numero di sottrazioni e resto)
	unsigned int* v = calloc(2, sizeof(unsigned int));  //inizializzazione vettore contenente numero
														//di sottrazioni e resto

	if (d == 0) {										// se il denominatore è zero, il risultato non è definito
														// scelgo quindi di dare come valore del risultato 0
														// e del resto 0
		v[0] = 0;
		v[1] = 0;
		printf("%u diviso %u non e' definito. Non si puo' dividere un numero per zero\n", n, d);
		return v;
	}
	 
	DivisioneRec(n, d, 0, &s, &resto);					//il compilatore chiama il programma che 
														//esegue delle divisioni per mezzo delle sottrazioni
	
	v[0] = s;											//il numero delle sottrazioni tra il numeratore e il denominatore
														//e' quoziente e la funzione lo copia nell'elemento 0 del vettore v
	v[1] = resto;										//il resto invece viene copiato nell'elemento 1 del vettore v

	if (resto == 0) {
		printf("%u diviso %u fa %u\n", n, d, s);
	}
	else {
		printf("%u diviso %u fa %u resto %u. ", n, d, s, resto);
		printf("Infatti %u = %u * %u + %u\n", n, d, s, resto);
	}
	return v;											//restitu

}