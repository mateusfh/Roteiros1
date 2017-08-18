#include <stdio.h>
#include <string.h>

typedef struct
{
	char nomeb[31];
	char tipom[11];
	int integrantes;
	int posicao;

}tBanda;

tBanda banda[5];

void Preenche(){
	int i;
	char clear[4];

	for (i=0; i<2; i++){

		printf ("Digite o nome da banda: ");
		fgets(banda[i].nomeb, sizeof(banda[i].nomeb), stdin);
		printf ("Digite o tipo musical: ");
		fgets(banda[i].tipom, sizeof(banda[i].tipom), stdin);
		printf("Digite a quantidade de integrantes: ");
		scanf ("%d", &banda[i].integrantes);
		printf ("Digite a posicao da banda no seu ranking: ");
		scanf ("%d", &banda[i].posicao);
		fgets(clear, sizeof(clear), stdin);

	}
	for (i=0; i<4; i++){
		printf ("\nNome da %d banda: %s\n", i+1, banda[i].nomeb);
		printf ("Tipo musical: %s\n", banda[i].tipom);
		printf ("\nQuantidade de integrantes: %d\n", banda[i].integrantes);
		printf ("\nPosicao no ranking: %d\n", banda[i].posicao);

	}
}

void pesquisaNumero(){
	int i, x;

	printf ("Digite o ranking que voce quer encontrar: ");
	scanf ("%d", &x);

	for (i=0; i < 4; i++){
		if (i == x){
			printf ("Nome da %d banda: %s\n", i+1, banda[i].nomeb);
			printf ("Tipo musical: %s\n", banda[i].tipom);
			printf ("Quantidade de integrantes: %d\n", banda[i].integrantes);
			printf ("Posicao no ranking: %d\n", banda[i].posicao);
			break;
		}
	}
}

void pesquisaTipo(){
	char tipo[11];

	printf ("Digite o tipo da banda(s) que voce quer pesquisar: ");
	fgets(tipo,sizeof(tipo), stdin);

	for (int i = 0; i<4; i++){
		if (!strcmp(tipo, banda[i].tipom)){
			printf ("Nome da %d banda: %s\n", i+1, banda[i].nomeb);
			printf ("Tipo musical: %s\n", banda[i].tipom);
			printf ("Quantidade de integrantes: %d\n", banda[i].integrantes);
			printf ("Posicao no ranking: %d\n", banda[i].posicao);
		}
	}
}

void pesquisaNome(){
	char nomedab[31];

	printf ("Digite o nome da banda que voce quer pesquisar: ");
	fgets(nomedab, sizeof(nomedab), stdin);

	for (int i = 0; i<4; i++){
		if(!strcmp(nomedab, banda[i].nomeb)){
			printf ("A banda %s esta nas suas favoritas!", nomedab);
			break;
		}
	}
			printf ("A banda %s nao esta nas suas favoritas", nomedab);
}

int main(int argc, char const *argv[])
{
	Preenche();
	pesquisaNumero();
	pesquisaNome();
	pesquisaTipo();

	return 0;
}
