#include <stdlib.h>
#include <stdio.h>

void PariDispariRec(int v[], int n, int i, int p, int d, int *v_p, int *v_d) {
	if (i == n) {
		printf("I numeri pari del vettore v: ");
		for (int i = 0; i < p - 1; i++) {
			printf("%d, ", v_p[i]);
		}
		printf("%d\n", v_p[p - 1]);

		printf("I numeri dispari del vettore v: ");
		for (int i = 0; i < d - 1; i++) {
			printf("%d, ", v_d[i]);
		}
		printf("%d\n", v_d[d - 1]);
		return;
	}

	if (i < n) {
		if (v[i] % 2 == 0) {
			v_p = (int*) realloc(v_p, (p + 1) * sizeof(int));
			v_p[p] = v[i];
			p++;
			PariDispariRec(v, n, i+1, p, d, v_p, v_d);
		}
		else {
			v_d = (int*) realloc(v_d, (d + 1) * sizeof(int));
			v_d[d] = v[i];
			d++;
			PariDispariRec(v, n, i+1, p, d, v_p, v_d);
		}
	}
}

void PariDispari(int v[], int n) {
	if (v == NULL) {
		return;
	}
	int *v_p = malloc(sizeof(int));
	int *v_d = malloc(sizeof(int));
	PariDispariRec(v, n, 0, 0, 0, v_p, v_d);
}