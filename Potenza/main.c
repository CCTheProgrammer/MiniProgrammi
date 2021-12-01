#include <stdio.h>
double Potenza(int n, int exp);

int main() {
	int base = 10;
	int exp = 2;
	double pot = Potenza(base, exp);
	printf("%d elevato alla potenza di %d fa %d", base, exp, pot);
}
