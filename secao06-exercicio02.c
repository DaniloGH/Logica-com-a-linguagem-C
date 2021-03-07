/* Secao 06 - Exercício 2
 *
 *Elabore um algoritmo que leia um número, se positivo armazene-o em 'a',
 *se for negativo, em 'b'. No final mostrar o resultado.
 */

#include <stdio.h>

int main(){
	//Declaração de variáveis
	int n, a, b;

	//Entrada
	printf("Digite um número inteiro: ");
	fflush(stdout);
	scanf("%d", &n);

	//Processamento
	if(n > 0){
		a = n;
		printf("Este é um número positivo, portanto a = %d", a);
	}else if(n < 0){
		b = n;
		printf("Este é um número negativo, portanto b = %d", b);
	}
}
