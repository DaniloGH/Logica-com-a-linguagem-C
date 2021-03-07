/* Secao 06 - Exercício 5
 *
 *João da Silva, pescador, comprou um microcomputador para controlar o rendimento diário de seu trabalho.
 *Toda vez que ele traz um peso de peixes maior que o estabelecido pelo regulamento de pesca do estado
 *de São Paulo (50 Kg) deve pagar uma multa de R$ 4,00 por Kg excedente. João precisa que você faça um
 *algoritmo que leia a variável 'p' (peso de peixes) e verifique se há excesso. Se houver gravar na
 *variável 'e' (excesso) e na variável 'm' o valor da multa que João deverá pagar. Caso contrário mostrar
 *tais variáveis com o conteúdo 'zero'.
 *
 */

#include <stdio.h>

int main(){
	//Declaração de variáveis
	float p, e = 0 , m = 0;

	//Entrada
	printf("Digite o peso(Kg) total de peixes: ");
	fflush(stdout);
	scanf("%f", &p);

	//Processamento
	if(p > 50){
		e = p - 50;
		m = e * 4;
		//Saída
		printf("Você excedeu o limite de peso em %.2f Kg,\nPortanto pagará R$ %.2f de multa.", e, m);
	}
	else{
		//Saída
		printf("Sua excessão de peso foi %.2f Kg e sua multa tem valor %.2f.", e, m);
	}
}
