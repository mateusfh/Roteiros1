#include <stdio.h>
#include <stdlib.h>

int main(){
char nome[21];
int i;

printf("Digite seu nome: ");
scanf("%20s", &nome);

for (i = 0; nome[i] != '\0'; i++){

printf("%c \n", nome[i]);

}

return 0;
}
