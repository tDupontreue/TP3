#define CRT_SECURES_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char str[100], rev[100];
	int t, i, j;

	printf(" Entrez une chaine de caractere :  ");
	gets_s(str);

	j = 0;
	t = strlen(str);

	rev[t] = '\0'; //le dernier caractère doit toujours être égale à '\0'.
	for (i = t - 1; i >= 0; i--)
	{
		rev[j++] = str[i];
	}

	printf(" Chaîne de caractère après inversion = %s", rev);

	return 0;
}