#include <stdio.h>
#include <stdlib.h>




float ConverteHora(float x){
x = x - 12;
return x;


}

int main(){
float h, m, z = 12;


printf("Digite as horas: ");
scanf("%f", &h);

printf("Digite os minutos: ");
scanf("%f", &m);

if (h > 12 && h < 24){
h = ConverteHora(h);

}

if (h < 0 || m < 0){
printf("Digite um valor positivo para horas ou minutos");


}

printf("A nova hora será: %.0f:%.0f ", h, m);




return 0;

}
