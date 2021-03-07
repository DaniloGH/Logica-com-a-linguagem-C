/* Secao 03 - exercício 02
 *
 * Faça um algoritmo para "calcular o estoque medio de uma peça".
 * sendo que:
 * estoque_medio = (quantidade_minima + quantidade_maxima) / 2
 */

#include <stdio.h>

int main(){
	//Declaração de variáveis
	int qtde_min, qtde_max;
	float estoque_medio;

	//Entradas
	printf("Digite por favor, a quantidade mínima da peça: ");
	fflush(stdout);
	scanf("%d", &qtde_min);

	printf("Digite por favor, a quantidade máxima da peça: ");
	fflush(stdout);
	scanf("%d", &qtde_max);

	//Processamentos
	estoque_medio = (qtde_min + qtde_max) / 2;

	//Saídas
	printf("O estoque médio para essa peça é %.2f", estoque_medio);
}
