#include <stdio.h>
#include <string.h>

char *sem_espaco(char *texto){
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

int main(void){
	char texto[] = "The quick brown fox jumps over the lazy dog";
	
	printf("%s\n", texto);
	
	char *frase = sem_espaco(texto);
	
	printf("%s\n", frase);
	
	return 0;
}
