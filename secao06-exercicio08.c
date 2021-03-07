/* Secao 06 - Exercício 8
 *
 *Faça um algoritmo que leia um número inteiro e mostre uma mensagem
 *indicando se este número é par ou ímpar, e se é positivo ou negativo.
 */

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
	//Variaveis
	int numero, i;
	char a[6], b[9];

	//Entradas
	printf("Digite um número inteiro: ");
	fflush(stdout);
	scanf("%d", &numero);

	//Processamentos
	if(numero % 2 == 0){
		strcpy(a, "Par");
		i = 1;
	}
	else{
		strcpy(a, "Ímpar");
		i = 1;
	}
	if(numero > 0){
		strcpy(b, "Positivo");
		i = 1;
	}
	else{
		strcpy(b, "Negativo");
		i = 1;
	}
	if(numero == 0){
		i = 0;
	}

	//Saídas
	if (i == 1){
	printf("O número digitado é %s e %s.", a, b);
	}else{
	printf("\nZero é um número neutro.");
	}
}
