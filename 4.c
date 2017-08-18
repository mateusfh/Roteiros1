#include <stdio.h>
#include <stdlib.h>


int Divisivel(int x, int y){

    if (x/y){
        return 1;
    }else {
    return 0;

}

int Primo (int x){


if(x != 2 || x != 3 || x != 5){
if (x%2)
    printf("N eh primo\n");
if (x%3)
    printf("N eh primo\n");
if (x%5)
    printf("N eh primo\n");

} else {printf("Eh primo");
}
}



int main()  {

    int z, n1, n2;


    printf("Qual funcao (1 para Divisor e 2 para primo): ");
    scanf("%d", &z);

    while (1){
    if (z == 1){
    printf("digite um numero: ");
    scanf("%d", &n1);
    printf("digite seu divisor: ");
    scanf("%d", &n2);
    Divisivel(n1, n2);




    }

    if (z == 2){
    printf("digite um numero: ");
    scanf("%d", &n1);
   Primo(n1);


    }
if (z == 0)
{
    return 0;

} } return -1; }




