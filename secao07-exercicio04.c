/* Secao 07 - Exercício 4
 *
 *Construa um algoritmo que leia 10 valores inteiros e positivos e:
 *a) Encontre o maior valor
 *b) Encontre o menor valor
 *c) Calcule a média dos números lidos
 */

#include <stdio.h>

int main(){
	//Variáveis
	int valor[10], j = 1, maior = 0, menor;
	float n, media, soma = 0;

	//Entradas
	printf("Digite abaixo 10 números inteiros e positivos.\n");

	for(int i=0;i<10;i++){
		printf("Digite o %dº número: ", j);
		fflush(stdout);
		scanf("%f", &n);

		if(n == (int)n && n > 0){
			valor[i] = n;
			j++;
		}
		else{
			printf("Por favor, digite um número inteiro e positivo.\n");
			i--;
		}
	}
	menor = valor[0];

	//Processamentos
	for(int i=0;i<10;i++){
		soma += valor[i];
		if (valor[i]>maior){
			maior = valor[i];
		}
		if (valor[i]<menor){
			menor = valor[i];
		}
	}

	media = soma/10;

	//Saídas
	printf("\na) O maior valor entre todos os números é: %d\n", maior);
	printf("b) O menor valor entre todos os números é: %.d\n", menor);
	printf("c) A média aritmética dos números é: %.2f", media);
}
