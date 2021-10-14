#define _CRT_SECURE_NO_WARNINGS
#pragma hdrstop
#pragma argsused

#include <stdio.h>
#include <string.h>
#ifdef _WIN32
#include <tchar.h>
#else
typedef char _TCHAR;
#define _tmain main
#endif



#define Max 200


int main()

{
	char tableau[Max];
	char l;
	int x = 0, a, j, k, repete = 0;
	printf("entrez une chaine de caracteres :\n");
	gets_s(tableau);
	printf("choisissez une lettre : ");
	scanf("%c", &l);
	for (a = 0; a < strlen(tableau); a++)
	{

		x++;

		for (x = 0; x < a; x++) 
		{

			if (tableau[a] == tableau[x]);
		}
	}





	strrchr(tableau, l);
	printf("la lettre %c est a la place %d en partant de la droite\n", l, x);


	getchar();
}
