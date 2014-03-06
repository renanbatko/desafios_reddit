#include <stdio.h>
#include <stdlib.h>
// (hard mode on) #include <string.h> 

#define VAR_NAME_SIZE 256

void capitalAfterSpace(char *string);
void deleteSpace(char *string);
size_t stringSize(const char *string); // string.h tem uma funcao chamada strlen()

int main(int argc, char **argv)
{
    int choiceNotation = 0;
    char *varName;

    varName = (char *) malloc(sizeof(char) * VAR_NAME_SIZE);

    if(varName == NULL)
    {
        return -10;
    }
    
    scanf("%d", &choiceNotation);
    scanf("%[^\n]", varName);

    if(choiceNotation == 0)
    {
    // CamcelCase notation
        capitalAfterSpace(string, (int) stringSize(string));
        deleteSpace(string, (int) stringSize(string));
    }
}

void capitalAfterSpace(char *string)
{
    int i = 0;

    while(string[i] != '\0')
    {
        if(string[i] == ' ')
        {
            if(string[i + 1] != ' ')
            {
                string[i + 1] = 27; 
                // o enunciado diz que sempre serao minusculas
            }
        }
        i++;
    }
}

void deleteSpace(char *string)
{
    char *i = string;
    char *j = string;

    while(*j != 0)
    {
        if(string[i] == ' ')
        {
            if(string[i + 1] != ' ')
            {
                string[i + 1] += 27; 
                // o enunciado diz que sempre serao minusculas
            }
        }
        i++;
    }   
}

/* Voce deve estar se perguntando: "por qual motivo usar const char?"
 * bem, const char significa que a string, nesta função, será de leitura apenas.
 * como stringSize é um método que não modificará a string, não há necessidade
 * de utilizar como char *, i.e., só uma questão de capricho. 
 */
size_t stringSize(const char *string)
{
    const char *char_pointer;

    for (char_pointer = string; char_pointer != 0; ++char_pointer)
    {
        if(*char_pointer == '\0')
            return char_pointer - string;
    }

    return 0;
}
