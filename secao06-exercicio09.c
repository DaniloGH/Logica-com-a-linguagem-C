/* Secao 06 - Exercício 9
 *
 *A Secretaria de Meio Ambiente que controla o índice de poluição mantém 3
 *grupos de indústrias que são altamente poluentes do meio ambiente. O índice de
 *poluição aceitável varia de 0,05 até 0,25. Se o índice sobe para 0,3 as indústrias
 *do 1º grupo são intimadas a suspenderem suas atividades, se o índice crescer para 0,4
 *as industrias de 1º e 2º grupo são intimadas a suspenderem suas atividades, se o
 *índice atingir 0,5 todos os grupos devem ser notificados a paralisarem suas atividades.
 *Faça um algoritmo que leia o índice de poluição medido e emita uma notificação
 *adequada aos diferentes grupos de empresas.
 */

#include <stdio.h>

int main(){
	//Variaveis
	float indiceDePoluicao;

	//Entradas
	printf("Digite o número do índice de poluição medido: ");
	fflush(stdout);
	scanf("%f", &indiceDePoluicao);

	//Processamentos
	if((indiceDePoluicao >= 0.3)&&(indiceDePoluicao < 0.4)){
		printf("Atenção: Indústrias do Grupo 1 devem suspender suas atividades.");
	}
	else if((indiceDePoluicao >= 0.4)&&(indiceDePoluicao < 0.5)){
		printf("Atenção: Indústrias do Grupo 1 e do Grupo 2 devem suspender suas atividades.");
	}
	else if(indiceDePoluicao >= 0.5){
		printf("Todos os grupos de indústrias devem suspender as atividades.");
	}
	else {
		printf("Níveis aceitáveis.");
	}
}
