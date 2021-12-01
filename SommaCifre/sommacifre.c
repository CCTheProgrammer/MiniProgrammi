#include <math.h>

int SommaCifreRec(int n) {
	if (n == 0) {
		return 0;
	}
	return n % 10 + SommaCifreRec(n / 10);
}

int SommaCifre(int n) {
	if (n < 0) {
		return SommaCifreRec(abs(n));
	}
	return SommaCifreRec(n);
}