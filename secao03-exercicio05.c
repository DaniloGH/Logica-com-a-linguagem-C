/* Secao 03 - exercício 02
 *
 * Faça um algoritmo que converta metros para centímetros
 */

#include <stdio.h>

int main(){
	//Declaração de variáveis
	float metros, cm;

	//Entradas
	printf("Digite a quantidade de metros: ");
	fflush(stdout);
	scanf("%f", &metros);

	//Processamentos
	cm = metros*100;

	//Saídas
	printf("%.f Metros corresponde a %.f centímetros", metros, cm);
}
