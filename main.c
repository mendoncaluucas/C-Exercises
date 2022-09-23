#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	float b;
	char d;
	bool x;
	x = false; 
	printf("digite um numero:");
	scanf("%i", &a);
	printf("digite um ponto flutuante:");
	scanf("%f", &b);
	printf("Digite uma letra: \n");
	scanf("%c", &d);
	printf("Escreva uma variante boleada:");
	scanf("%b", &x);
	printf("O numero digitado foi: %i \n", a);
	printf("O ponto flutuante foi: %f", b);
	printf("A letra digitada foi: %c", d);
	printf("A variante boleada foi: %false", x);
	
	
	return 0;
}
