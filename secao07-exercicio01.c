/* Secao 07 - Exercício 1
 *
 *Faça um algoritmo que determine o maior entre N números.
 *A condição de parada é a entrada de um valor 0, ou seja, o algoritmo
 *deve ficar calculando o maior até que a entrada seja igual a 0 (ZERO).
 */

#include <stdio.h>

int main(){
	//Variaveis
	int numero, maior = 0;

	//Entrada
	printf("Digite um número inteiro: ");
	fflush(stdout);
	scanf("%d", &numero);

	//Processamentos
	while(numero != 0){
		if(numero > maior){
			maior = numero;
		}
		//Entradas
		printf("Digite um número inteiro: ");
		fflush(stdout);
		scanf("%d", &numero);
	}
	printf("\nO maior número é %d", maior);
}
