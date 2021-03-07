/* Secao 03 - Exercício 07
 *
 * Tendo como dados de entrada a altura de uma pessoa,
 * construa um algoritmo que calcule seu peso ideal, usando
 * a seguinte fórmula: (72.7 * altura) - 58
 */

#include <stdio.h>

int main(){
	//Declaração de variáveis
	float altura, pesoIdeal;

	//Entrada
	printf("Digite aqui a sua altura: ");
	fflush(stdout);
	scanf("%f", &altura);

	//Processamento
	pesoIdeal = (72.7 * altura) - 58;

	//Saída
	printf("O seu peso ideal é %.2f", pesoIdeal);
}
