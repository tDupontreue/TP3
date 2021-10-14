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

void lirechaine (char tableau[Max])
{
	int a=0;
	char c;
	c=getchar();
	while((c!='\n') && (a<Max))
	{


	tableau[a++]=c;

	c=getchar();
	}
	tableau[a]='\0';
}

int main()
{
	char tableau2 [100][2];
	char lettres;
	int nombre;
	char tableau[Max];
	int x=0, a, j, k,repete = 0;
	printf("entrez une chaine de caracteres :\n");
	lirechaine(tableau);
	for(a=0; a<strlen(tableau); a++)
	{
			for (j=0; j<strlen(tableau); j++)
			{
				if (tableau[a]==tableau[j])
				x++;
			}
	printf("%d fois la lettre %c\n", x, tableau[a]);
	x=0;
	}
getchar();
}