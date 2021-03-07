/*Seção 07 - Exercício 7
 *
 * 	Sua organização acaba de contratar um estagiário para trabalhar no
	Suporte de Informática, com a intenção de fazer um levantamento
	nas sucatas encontradas nesta área. A primeira tarefa dele é testar
	todos os cerca de 200 mouses que se encontram lá, testando e anotando o
	estado de cada um deles, para verificar o que se pode aproveitar deles.
	Foi requisitado que você desenvolva um programa para registrar este
	levantamento. O programa deverá receber um número indeterminado
	de entradas, cada uma contendo: um número de identificação do
	mouse o tipo de defeito:
	- necessita da esfera;
	- necessita de limpeza;
	- necessita troca do cabo ou conector;
	- quebrado ou inutilizado

	Uma identificação igual a zero encerra o programa. Ao final o
	programa deverá emitir o seguinte relatório:

	Quantidade de mouses: 100

	Situação								Quantidade	Percentual
	1- Necessita da esfera					40			40%
	2- Necessita de limpeza					30			30%
	3- Necessita troca do cabo ou conector	15			15%
	4- Quebrado ou inutlizado				15			15%
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	//Variáveis
	int id, qtde, esfera = 0, limpeza = 0, caboConector = 0, quebrado = 0, defeito;
	float percent1, percent2, percent3, percent4;

	//Entradas
	while(id != 0){
		printf("Digite por gentileza, o número de identificação do mouse: ");
		fflush(stdout);
		scanf("%d", &id);
		if (id == 0){
			break;
		}
		printf("Identifique o problema: \n");
		printf("1- Necessita da esfera \n");
		printf("2- Necessita de limpeza \n");
		printf("3- Necessita troca do cabo ou conector \n");
		printf("4- Quebrado ou inutilizado \n");
		printf("\nDigite o número do problema: ");
		fflush(stdout);
		scanf("%d", &defeito);
		printf("\n");

		//Processamentos
		switch (defeito){
			case 1:
				esfera++;
				break;
			case 2:
				limpeza++;
				break;
			case 3:
				caboConector++;
				break;
			case 4:
				quebrado++;
				break;
		}
	}
	qtde = esfera+limpeza+caboConector+quebrado;
	percent1 = ((float)esfera*100)/(float)qtde;
	percent2 = ((float)limpeza*100)/(float)qtde;
	percent3 = ((float)caboConector*100)/(float)qtde;
	percent4 = ((float)quebrado*100)/(float)qtde;

	//Saídas
	printf("\nQuantidade de mouses: %d\n", qtde);
	printf("Situação						Quantidade	Percentual\n");
	printf("1- Necessita da esfera					%d		%.2f%%\n", esfera, percent1);
	printf("2- Necessita de limpeza					%d		%.2f%%\n", limpeza, percent2);
	printf("3- Necessita troca do cabo ou conector			%d		%.2f%%\n", caboConector, percent3);
	printf("4- Quebrado ou inutilizado				%d		%.2f%%\n", quebrado, percent4);
}
