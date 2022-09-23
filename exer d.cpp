//Faça um programa que calcule o número médio de alunos por turma. Para isto,

//peça a quantidade de turmas e a quantidade de alunos para cada turma.
#include <stdio.h>

int main(void){
	int turmas,alunos,i;
	float media;
	
	for(i=1;i<=turmas;i++){

	printf("Qual o numero total de turmas?:\n");
	scanf("%d", &turmas);
	fflush(stdin);
	
	printf("Qual o numero de alunos?:\n");
	scanf("%d", &alunos);
	fflush(stdin);
	
}
alunos = alunos + 1;

media = alunos/turmas;

printf("O numero medio de aluno por turma eh:%f", media);

	
	
	
	
	return 0;
}
