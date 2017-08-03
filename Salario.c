#include <stdio.h>
#include <stdlib.h>

int main(){
float s, sl, d;

printf("Digite o salário: ");
scanf("%f", &s);
printf("%.2f\n", s);
if (s < 420){
sl = s * (0.08);
printf("%.2f\n", sl);
d = s - sl;
printf("%.2f\n", d);


} if (s > 420 && s <= 1350){
sl = s * (0.09);
printf("%.2f\n", sl);
d = s - sl;
printf("%.2f\n", d);


} if (s > 1350) {
sl = s * (0.10);
printf("%.2f\n", sl);
d = s - sl;
printf("%.2f\n", d);

}

return 0;
}
