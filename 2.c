#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main () {

int i, j, tam;
char nome[11];

printf("Digite seu nome: ");
scanf("%s", &nome);

tam = strlen(nome);


for (i = 0; i < tam; i++){
    for (j = 0; j <= i; j++){

        printf("%c", nome[j]);

    }

printf("\n");
    }
return 0;
}
