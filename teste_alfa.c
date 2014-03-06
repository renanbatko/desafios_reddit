#include <stdio.h>
#include <string.h>

int calcula(char *palavra){
	int i, ocorr = 0;
	for (i = 1; i <= strlen(palavra); i++)
		if (palavra[i-1] < palavra[i])
			ocorr++;
			
	printf("tamanho = %d\tocorr = %d\n", strlen(palavra), ocorr);
	return ((ocorr == strlen(palavra)) + 1);
}

int main(void){
	
	int p;
	p = calcula("ghost");
	printf("%d\n", p);
	
	return 0;
}
