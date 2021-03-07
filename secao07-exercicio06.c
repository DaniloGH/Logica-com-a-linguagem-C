/* Secao 07 - Exercício 6
 *
 *Desenvolva um gerador de tabuada, capaz de gerar a tabuada de
 *qualquer número inteiro entre 1 a 10. O usuário deve informar
 *de qual número ele deseja ver a tabuada. A saída deve ser
 *conforme o exemplo abaixo:
 *
 *Tabuada de 5:
 *5 x 1 = 5
 *5 x 2 = 10
 *...
 *5 x 10 = 50
 */

#include <stdio.h>

int main(){
	//Variáveis
	int n, boolean = 1;

	while(boolean == 1){
		//Entrada
		printf("Informe um número inteiro entre 1 a 10: ");
		fflush(stdout);
		scanf("%d", &n);

		//Processamentos
		if(n >= 1 && n <= 10){
			printf("Tabuada de %d:\n", n);
			for(int i = 1; i <= 10;i++){
				printf("%d x %d = %d\n", n, i, (n*i));
			}
			break;
		}
		else{
			printf("Erro! Por favor, informe um número inteiro entre 1 a 10.\n");
		}
	}
}
