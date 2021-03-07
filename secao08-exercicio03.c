/*Secção 08 - Exercício 3
 *
 *Faça um programa que carregue um vetor com dez números
 *inteiros. Mostre o vetor na ordem inversa a que foi digitado.
 */

#include <stdio.h>

int main(){
	//Variáveis
	int vetor[10];

	//Entradas
	for(int i=0;i<10;i++){
		printf("Digite um número inteiro para o Vetor[%d]: ", i);
		fflush(stdout);
		scanf("%d", &vetor[i]);
	}
	printf("\n");

	for(int i=9;i>=0;i--){
		printf("Vetor[%d] = %d\n", i, vetor[i]);
	}
}
