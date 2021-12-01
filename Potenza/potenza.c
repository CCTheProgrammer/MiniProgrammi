#include <stdio.h>
#include <math.h>

double PotenzaRec(int n, int exp) {

	if (exp == 0) {
		return 1;
	}

	return n * PotenzaRec(n, exp - 1);
}

double Potenza(int n, int exp) {
	if (n <= 0) {
		printf("Il numero deve essere non-negativo (maggiore ma non uguale di 0) \n");
		return -1;
	}

	if (exp < 0) {
		return 1 / PotenzaRec(n, abs(exp));
	}

	return PotenzaRec(n, exp);
}