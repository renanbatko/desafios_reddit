#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
	int n, i;
	char *temp = (char *) malloc(100*sizeof(char));
	
	scanf(" %d", &n);
	
	char **mat = (char **) malloc(n*sizeof(char *));
	for (i = 0; i < n; i++)
	{
		scanf(" %[^\n]", temp);
		*(mat+i) = (char *) malloc(strlen(temp)*sizeof(char));
		strcpy(mat[i], temp);	
	}
	free(temp);
	
	//for (i = 0; i < n; i++)
	//	printf("%s\n", mat[i]);
	
	free(mat);
	
	return 0;	
}
