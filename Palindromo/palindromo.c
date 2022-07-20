#include "palindromo.h"

bool PalindromoRec(char* str, int len, int inizio, int fine, enum CaseSens c) {
	if (fine < len) {   //se il contatore x lo scorrim. inv. fine e' minore della lunghezza della stringa len
		if (inizio < fine) {  //se inizio e' minore di fine e' possibile fare verificare
							  //se la stringa di parametro e' palindroma cioe'
							  //il suo contenuto letto da sx a dx e' uguale a quello
							  //letto da dx a sx
			if (c = Case) {   //nel caso il inizi-esimo carattere e il fine-esimo
							  //carattere debbano essere o entrambi maiuscoli o entrambi minuscoli
				if (str[inizio] != str[fine]) {  //se non coincidono, il controllo si interrompe
					return false;				 //e la fz. ricorsiva ritorna false
				}
				else {
					return PalindromoRec(str, len, inizio + 1, fine - 1, c); //si prosegue con il controllo
					//fintanto che l'inizi-esimo caratttere e il fine-esimo carattere coincidono
					//naturalmente con il doppio scorrimento simultaneo incr. di 1 inizio e decr. di 1 fine che
					//risp. sono il contatore per lo scorrimento normale e il contatore per quello inverso
				}
			}
			else {            //nel caso il inizi-esimo car. e il fine-esimo car.
							  //debbano essere uguali indip. dal fatto che l'uno e l'altro siano risp.
							  //maiu. o minu., viceversa, entrambi maiuscoli o entrambi maiuscoli
				if (str[inizio] != str[fine] || toupper(str[inizio]) != toupper(str[fine])) {  //uso toupper per la conver. di
																							   //caratteri minuscoli in caratteri maiuscoli
					return false;
				}
				else {
					return PalindromoRec(str, len, inizio + 1, fine - 1, c); //idem con patate xD
				}
			}
		}
	}
	return true;  //se la verifica e' andata a buon fine, la fz. ritorna true, anche quando la stringa e' vuota
				  //dato che fine e len sono uguali
}

bool Palindromo(char* str, enum CaseSens c) {
	if (c != Case && c != NoCase) {  //se l'enum c e' diverso da case e da nocase, non e' possibile
									 //proseguire con l'operazione di controllo della stringa palindroma
		return false;
	}
	int len = strlen(str);           //invocazione strlen utile per il calcolo della lunghezza
	return PalindromoRec(str, len, 0, len - 1, c);  //invocazione fz. ricorsiva
}