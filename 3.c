#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main () {

int i, j = 0, k = 1, tam;
//printf("Digite o tamanho da string: ");
//scanf("%d", &tam);
char str[11];

printf("Digite a String: ");
scanf("%s", &str);
tam = strlen (str);
//printf("%d", tam);

for (i = 0; i < (tam/2); i++){
       // printf("%c", str[i]);
   if (str[i] == str[tam - k]){
    k++;
    j++;
                    }
            }
           // printf("%d", j);
            //j = j -1;

if (j == tam/2){
    printf("\nE palindromo.\n");

if (tam%2 != 0){
    tam = tam + 1;
    if (j == (tam/2)){
        printf("\nE palindromo.");
    }
}

  //  break;
} else{
    printf("\nNao e palindromo.\n");
   // break;

}


return 0;
    }


