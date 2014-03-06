//http://www.reddit.com/r/dailyprogrammer/comments/1pwl73/11413_challenge_139_easy_pangrams/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *tira_espaco(char *texto){
	int i;
	int tamanho = strlen(texto);
	
	for (i = 0; i < tamanho; i++)
	{
		if (texto[i] == ' ')
		{
			int j;
			for (j = i; j < tamanho; j++)
				texto[j] = texto[j+1];
			tamanho--;
		}
	}
	return texto;
}

typedef struct {
	int ocorr;
	char letra;
} alfa;

int calcula_pangram(char *texto){
	int i = 0;
	alfa alfabeto[26];
	
	for (i = 0; i < 26; i++)
	{
		alfabeto[i].letra = 97 + i;
		alfabeto[i].ocorr = 0;
	}
	
	for (i = 0; i < strlen(texto); i++)
	{
		int j;
		for (j = 0; j < 26; j++)
		{
			if (texto[i] >= 65 && texto[i] <= 90)
				texto[i] = texto[i] + 32;
			if (texto[i] == alfabeto[j].letra)
				alfabeto[j].ocorr++;
		}
	}
	
	//só para testes
	//for (i = 0; i < 26; i++)
	//	printf("%c %d\n", alfabeto[i].letra, alfabeto[i].ocorr);
	
	
	for (i = 0; i < 26; i++)
		if (alfabeto[i].ocorr == 0)
			return 0;
	return 1;
}

int main(void){
	int n;
	
	scanf(" %d", &n);
	
	char *frase = (char *) malloc(1024*sizeof(char));
	int *vet_result = (int *) calloc(n, sizeof(int));

	int i;
	for (i = 0; i < n; i++)
	{
		scanf(" %[^\n]", frase);
		frase = tira_espaco(frase);
		vet_result[i] = calcula_pangram(frase); 
	}
	
	printf("\n");
	for (i = 0; i < n; i++)
	{
		if (vet_result[i] == 1)
			printf("True\n");
		if (vet_result[i] == 0)
			printf("False\n");	
	}
	
	free(frase);
	free(vet_result);
	
	return 0;
}
