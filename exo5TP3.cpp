#define _CRT_SECURE_NO_WARNINGS
#pragma hdrstop
#include <stdio.h>
#include <string.h>
#ifdef _WIN32
#include <tchar.h>
#include <conio.h>
#else
typedef char _TCHAR;
#define _tmain main
#endif
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int a, b, n, k = 0;
	char *p;
	p = (char*)malloc(100 * sizeof(char));
	printf("entrer une phrase \a au maximum comportant 100 caracteres:  \a");
	gets_s(p, 100);
	n = strlen(p);
	for (b = 0; b < n; b++)
	{
		if (p[b] == ' ')
		{
			for (a = b; a < n; a++)
			{
				p[a] = p[a + 1];
			}
		}
	}
	printf("%s\n", p);
	_getch();
	return 0;
}
