#include <stdio.h>
#include <string.h>

double percentual(int votoj, int votot){
	double resultado=0;

	resultado = (votoj/(double)votot)*100;
	return resultado;

}
int main(int argc, char const *argv[])
{
	int votojogador[24] = {0}, njogador, quant = 0, aux = 0;

	printf ("Enquete: Quem foi o melhor jogador? \n\n");
	while(1){
		printf("Numero do jogador (fim = 0): ");
		scanf("%d", &njogador);

		if (njogador == 0){
			break;
		}
		if (njogador > 23){
			printf("Informe um valor entre 1 e 23\n");
		} else {
		votojogador[njogador]++;
		quant++;
		}
	}
	printf("Resultado da votacao: \n");

	printf("Foram computados %d votos.\n", quant);

	printf ("Jogador  Votos\n");

	for(int i =0; i < 24; i++){
		if (votojogador[i] != 0){
			if (votojogador[i] > votojogador[aux]){
				aux = i;
			}
		printf ("%d\t%d\t%.1lf porcento\n",i , votojogador[i],percentual(votojogador[i],quant));

		}
	}

printf ("O melhor jogador foi o numero %d, com %d votos, correspondendo a %.1lf porcento do total de votos.\n", aux, votojogador[aux], percentual(votojogador[aux],quant));

	return 0;
}
