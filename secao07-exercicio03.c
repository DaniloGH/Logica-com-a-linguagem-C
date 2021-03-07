/* Secao 07 - Exercício 3
 *
 *Elabore um programa que gera e escreve os números ímpares dos
 *números entre 100 e 200.
 */

#include <stdio.h>

int main(){
	//Processamentos
	for(int i = 100; i <= 200;i++){
		if(i % 2 != 0){
			printf("%d\n", i);
		}
	}
}
