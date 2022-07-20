#include <stdlib.h>
#include <stdbool.h>
#include "palindromo.h"

int main() {
	char str[] = "si si sis is is";
	bool pal;
	pal = Palindromo(str, NoCase);

	*str = NULL;
	pal = Palindromo(str, NoCase);
}