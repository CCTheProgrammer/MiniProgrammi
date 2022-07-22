void InvertiArrayIntervallo(int* v, int n, int i, int f);

int main() {
	int v[] = { 55, 40, 33, 22, 6, 8, 10, 22 };
	//inversione ordine el. di un sottovettore def. dall'intervallo [i,f] app. a [0, n]
	InvertiArrayIntervallo(v, 8, 0, 3);
	InvertiArrayIntervallo(v, 8, 0, 3);
	InvertiArrayIntervallo(v, 8, 3, 3);  //non succede nulla se l'indice i e' uguale all'indice f
}