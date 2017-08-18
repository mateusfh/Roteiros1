#include <stdio.h>
#include <string.h>

typedef struct
{
	char nome[31];
	char endereco[51];
	char matricula[11];
	char curso[31];

}tAluno;

tAluno gAluno[100];

unsigned int consultaAlunosPorCurso (char *curso){
	int i, cont=0;

	for (i=0; i < 2; i++){
		if (!strcmp(gAluno[i].curso, curso)){
			cont++;
		}
	}
	return cont;

}

int main(int argc, char const *argv[])
{
	char pesquisa[31];

	for (int i = 0; i < 2; i++){
		printf("Digite o seu nome: \n");
		fgets(gAluno[i].nome, sizeof(gAluno[i].nome), stdin);
		printf ("Digite o endereco: \n");
		fgets(gAluno[i].endereco, sizeof(gAluno[i].endereco), stdin);
		printf ("Digite a sua matricula: \n");
		fgets(gAluno[i].matricula, sizeof(gAluno[i].matricula), stdin);
		printf ("Digite o seu curso: \n");
		fgets(gAluno[i].curso, sizeof(gAluno[i].curso), stdin);

	}

	printf ("Digite o curso que voce quer pesuisar: \n");
	fgets(pesquisa, sizeof(pesquisa), stdin);

	printf("Existem %d alunos nesse curso.\n", consultaAlunosPorCurso(pesquisa));



	return 0;
}
