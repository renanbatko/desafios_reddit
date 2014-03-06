//http://www.reddit.com/r/dailyprogrammer/comments/101m7y/9172012_challenge_99_easy_words_with_letters_in/
#include <stdio.h>
#include <string.h>

int calcula(char *palavra){
	int i, ocorr = 0;
	if (strlen(palavra) < 2)
		return 1;

	for (i = 1; i < strlen(palavra); i++)
		if (palavra[i-1] <= palavra[i])
			ocorr++;
	
	ocorr++;
	
	return (ocorr == strlen(palavra));
}

int main(void){
	FILE *arq;
	arq = fopen("enable1.txt", "r");
	
	char buffer[50];
	int sim = 0;
	
	while (!feof(arq))
	{
		fscanf(arq, "%s", buffer);
		sim = sim + calcula(buffer);
	}
	
	printf("%d\n", sim);
	
	fclose(arq);
	
	return 0;
}
