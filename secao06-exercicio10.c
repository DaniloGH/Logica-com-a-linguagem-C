/* Secao 06 - Exercício 10
 *
 *Elabore um algoritmo que dada a idade de um nadador classifique-o em
 *uma das seguintes categorias:
 *infantil-a = 5 a 7 anos
 *infantil-b = 8 a 11 anos
 *juvenil-a = 12 a 13 anos
 *juvenil-b = 14 a 17 anos
 *adultos = Maiores de 18 anos
 */

#include <stdio.h>

int main() {
	//Variaveis
	int idade;

	//Entradas
	printf("Por favor, digite a idade do nadador: ");
	fflush(stdout);
	scanf("%d", &idade);

	//Processamentos
	if(idade >= 5 && idade <= 7){
		printf("Este nadador pertence à categoria 'Infantil-A'.");
	}
	else if(idade >= 8 && idade <= 11){
		printf("Este nadador pertence à categoria 'Infantil-B'.");
	}
	else if(idade >= 12 && idade <= 13){
		printf("Este nadador pertence à categoria 'Juvenil-A'.");
	}
	else if(idade >= 14 && idade <= 17){
		printf("Este nadador pertence à categoria 'Juvenil-B'.");
	}
	else if(idade >= 18){
		printf("Este nadador pertence à categoria 'Adultos'.");
	}
	else{
		printf("Idade insuficiente.");
	}
}
