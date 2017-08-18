#include <stdio.h>
#include <stdlib.h>

int main () {

int i, tam;
char nome[11];

printf("Digite seu nome: ");
scanf("%s", &nome);

tam = strlen(nome);

for (i = 0; i < tam; i++){
    printf("%c \n", nome[i]);


    }
return 0;
}
