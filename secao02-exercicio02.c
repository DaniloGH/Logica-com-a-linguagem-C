/*Secao 02 - Exercicio 02
 * Faça um algoritmo para somar dois números
 * e multiplicar o resultado pelo primeiro número.
 */

#include <stdio.h>
// std = Standard (Padrão)
// io = input/output (Entrada/Saída)

int main(){
	//Declaracao de variaveis
	int num1, num2, soma, multiplicacao;

	//Entradas
	printf("Informe o primeiro número: ");
	fflush(stdout);
	scanf("%d", &num1);

	printf("Informe o segundo número: ");
	fflush(stdout);
	scanf("%d", &num2);

	//Processamentos
	soma = num1 + num2;
	multiplicacao = soma * num1;

	//Saída
	printf("O resultado da multiplicação é %d", multiplicacao);

}
