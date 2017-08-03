#include <stdio.h>
#include <stdlib.h>

int main (){
int i;
float p, pf, d;

printf("Digite a idade do cliente: ");
scanf("%d", &i);
printf("Digite o preço do sapato: ");
scanf("%f", &p);

if(i <= 18){
d = p *0.10;
pf = p - d;
printf("Preço final do sapato = %.2f\n", pf);
printf("Desconto = %.2f", d);
}
else {
d = p *0.20;
pf = p - d;
printf("Preço final do sapato = %.2f\n", pf);
printf("Desconto = %.2f", d);
}

return 0;

}
