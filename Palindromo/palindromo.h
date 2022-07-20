#ifndef PALINDROMO_H
#define PALINDROMO_H
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
enum CaseSens{ Case, NoCase};
bool PalindromoRec(char* str, int len, int inizio, int fine, enum CaseSens c);
bool Palindromo(char* str, enum CaseSens c);
#endif // !PALINDROMO_H
