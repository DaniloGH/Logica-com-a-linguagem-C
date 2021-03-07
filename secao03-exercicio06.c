/* Secao 03 - Exercício 06
 *
 * Faça um algoritmo que pergunte quanto você ganha,
 * por hora e o números de horas trabalhadas no mês.
 * Calcule e mostre o total do seu salário no referido
 * mês.
 */

#include <stdio.h>

int main(){
	//Declaração de variáveis
	float valor, salario;
	int horas_trabalhadas;

	//Entradas
	printf("Quanto você ganha por hora: ");
	fflush(stdout);
	scanf("%f", &valor);

	printf("Quantas horas você trabalhou neste mês: ");
	fflush(stdout);
	scanf("%d", &horas_trabalhadas);

	//Processamentos
	salario = valor*horas_trabalhadas;

	//Saídas
	printf("O seu salário neste mês é %.2f", salario);
}
