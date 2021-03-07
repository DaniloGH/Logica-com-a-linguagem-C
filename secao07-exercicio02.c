/* Secao 07 - Exercício 2
 *
 *Faça um algoritmo que conte de 1 a 100 e a cada múltiplo de 10
 *emita uma mensagem: "Múltiplo de 10".
 */

#include <stdio.h>

int main(){
	//Processamentos
	for(int i = 1; i <= 100; i++){
		if (i % 10 == 0){
			//Saída
			printf("%d é Múltiplo de 10,\n", i);
		}
		else if(i != 100){
			//Saída
			printf("%d, ", i);
		}
	}
}
