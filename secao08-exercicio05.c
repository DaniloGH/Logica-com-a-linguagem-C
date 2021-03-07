/*Secção 08 - Exercício 5
 *
 *Faça um programa que carregue um vetor com dez números inteiros.
 *Calcule e mostre os números superiores a 50 e suas respectivas posições.
 *Mostrar mensagem se não existir nenhum número nesta condição.
 */

#include <stdio.h>

int main(){
	//Variáveis
	int vetor1[10], boolean = 0;

	//Entradas
	for(int i=0;i<10;i++){
		printf("Digite um número inteiro para %d/10: ", (i+1));
		fflush(stdout);
		scanf("%d", &vetor1[i]);
	}

	//Processamentos
	for(int i=0;i<10;i++){
		if(vetor1[i] > 50){
			//Saída
			printf("vetor1[%d] = %d\n", i, vetor1[i]);
			boolean++;
		}
	}
	//Saída
	if (boolean==0){
		printf("\nNão existe nenhum número maior que 50 neste vetor.");
	}
}
