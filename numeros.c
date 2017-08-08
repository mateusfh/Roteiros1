#include <stdio.h>
#include <stdlib.h>




int Ninteiro(int x){
int i, j;

for(i = 1; i < x; i++)
{
	for (j = 1; j <= i; j++)
	{
		printf("%d ", i);
	}
	printf("\n");
}	

return 0;
}

int main(){
int n;

printf("Digite um número: ");
scanf("%d", &n);
Ninteiro(n);









return 0;
}
