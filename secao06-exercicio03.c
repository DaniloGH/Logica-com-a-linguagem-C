/* Secao 06 - Exercício 3
 *
 *Ler um número e verificar se ele é par ou ímpar. Quando for par armazenar
 *esse valor em 'p' e quando for ímpar armazená-lo em 'i'.
 *Exibir 'p' e 'i' no final do processamento.
 */

#include <stdio.h>

int main(){
	//Declaração de variáveis
	int n, p, i;

	//Entrada
	printf("Digite um número inteiro: ");
	fflush(stdout);
	scanf("%d", &n);

	//Processamento
	if(n % 2 == 0){
		p = n;
		printf("Este é um número par, portanto p = %d", p);
	}else if(n % 2 != 0){
		i = n;
		printf("Este é um número ímpar, portanto i = %d", i);
	}
}
