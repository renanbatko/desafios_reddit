//http://www.reddit.com/r/dailyprogrammer/comments/1q6pq5/11413_challenge_140_easy_variable_notation/
//sem usar string.h
#include <stdio.h>
#include <stdlib.h>

int calcula_tamanho(char *texto){
	int i = 0;
	while (texto[i] != '\0')
		i++;
	
	return (i+1);
}

char maiusculo(char c){
	c = c - 32;
	return c;
}

void SNAKE_CASE(int tipo, char *texto){
	int i;
	int tamanho = calcula_tamanho(texto);
	
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
	int tamanho = calcula_tamanho(texto);
	
	for (i = 0; i < tamanho; i++)
	{
		if (texto[i] == ' ')
			texto[i] = '_';
	}
	
	printf("%s\n", texto);
}

void CamcelCase(int tipo, char *texto){
	int i;
	int tamanho = calcula_tamanho(texto);
	
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
			tamanho--;
		}
	}
	
	printf("%s\n", texto);
}

int main(void)
{
	
	int tipo;
	char texto[30];
	
	scanf(" %d", &tipo);
	scanf(" %[^\n]", texto);
	
	if (tipo == 0)
		CamcelCase(0, texto);
	if (tipo == 1)
		snake_case(1, texto);
	if (tipo == 2)
		SNAKE_CASE(2, texto);

	return 0;		
}

