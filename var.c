//http://www.reddit.com/r/dailyprogrammer/comments/1q6pq5/11413_challenge_140_easy_variable_notation/
#include <stdio.h>
#include <string.h>

char maiusculo(char c){
	c = c - 32;
	return c;
}

void SNAKE_CASE(int tipo, char *texto){
	int i;
	int tamanho = strlen(texto);
	
	for (i = 0; i < tamanho; i++)
	{
		if (texto[i] == ' ')
			texto[i] = '_';
		else
			texto[i] = maiusculo(texto[i]);
	}
	
	printf("%s\n", texto);
}

void snake_case(int tipo, char *texto){
	int i;
	int tamanho = strlen(texto);
	
	for (i = 0; i < tamanho; i++)
	{
		if (texto[i] == ' ')
			texto[i] = '_';
	}
	
	printf("%s\n", texto);
}

void CammelCase(int tipo, char *texto){
	int i;
	int tamanho = strlen(texto);

	for (i = 0; i < tamanho; i++)
	{
		if (texto[i] == ' ')
		{
			int j;
			for (j = i; j < tamanho; j++)
			{
				if (j == i)
					texto[j] = maiusculo(texto[j+1]);
				else
					texto[j] = texto[j+1];
			}
			texto[tamanho] = ' ';
			tamanho--;
		}
	}

	printf("%s\n", texto);
}

int main(void)
{
	int tipo;
	char frase[30];

	scanf(" %d", &tipo);
	scanf(" %[A-Z a-z]", frase);

	if (tipo == 0)
		CammelCase(0, frase);
	if (tipo == 1)
		snake_case(1, frase);
	if (tipo == 2)
		SNAKE_CASE(2, frase);

	return 0;
}
