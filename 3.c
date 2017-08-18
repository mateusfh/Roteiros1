#include <stdio.h>
#include <stdlib.h>


int SequenciaNumeros(int n){
    int i, j, x;

    if(n == 1){
       return 1;
    }


    for(j = 1; j < n; j++){
        printf("\n");
    for(i = 1; i <= j; i++){

        printf("%d", i);

    }
    }
    printf("\n");
    for(x = 1; x <= n; x++){
    printf("%d", x);
    }


}




int main(){

    int n;

    printf("digite um numero: ");
    scanf("%d", &n);
    SequenciaNumeros(n);
return 0;

}

