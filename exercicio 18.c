#include <stdio.h>
#include <conio.h>
int main(void){
	char op;
	float a,b,r;
	printf("Escreva dois valores:\n");
	scanf("%f %f", &a, &b);
	printf(" A -Soma\n");
	printf(" B -Subtracao\n");
	printf(" C -Divisao\n");
	printf(" D - Multiplicacao\n");
	printf("\nEscolha uma opcao:\n");
    scanf("%c", &op);
    fflush(stdin);
	switch (op){
		case 'A':
		r = a+b;
		printf("O resultado e:%f", r);
		break;
		case 'B':
		r = a-b;
		printf("O resultado e:%f", r);
		break;
		case 'C':
		r = a/b;
		printf("O resultado e:%f", r);
		break;
		case 'D':
		r = a*b;
		printf("O resultado e:%f", r);
		break;
		default:
			printf("\nErro na operacao\n");
			
	}
	getch();		
	return 0;
}
