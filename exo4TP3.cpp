#define CRT_SECURES_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char str[100];
	int i;
	printf("\n Entrez la chaine a convertir en minuscule: ");
	gets_s(str);
	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] = str[i] + 32;
		}
	}
	printf("\n La chaine en minuscule = %s", str);
	return 0;
}