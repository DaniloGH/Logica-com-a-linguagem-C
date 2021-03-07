/* Secao 06 - Exercício 1
 *
 *Ler uma variável númerica n e imprimi-la somente se a mesma
 *for maior que 100, caso contrário imprimi-la com o valor zero.
 */

#include <stdio.h>

int main(){
	//Declaração de variáveis
	int n;

	//Entrada
	printf("Digite uma variável númerica: ");
	fflush(stdout);
	scanf("%d", &n);

	//Processamento
	if(n > 100){
		printf("%d", n);
	}else{
		n = 0;
		printf("%d", n);
	}
}
