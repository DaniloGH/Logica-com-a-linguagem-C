/* Secao 06 - Exercício 6
 *
 *Elabore um algoritmo que leia as variáveis 'c' e 'n', respectivamente código
 *e número de horas trabalhadas de um operário. Calcule o salário sabendo-se que
 *ele ganha R$ 10,00 por hora. Quando o número de horas exceder a 50 calcule o
 *excesso de pagamento armazenando-o na variável 'e'. Caso contrário zerar tal
 *variável, salário total e o salário excedente.
 */

#include <stdio.h>

int main(){
	//Declaração de variáveis
	float c, n = 0, t = 0, e = 0, salario = 0, extra = 0, salarioTotal = 0;

	//Entrada
	printf("Digite o código: ");
	fflush(stdout);
	scanf("%f", &c);
	gets(stdin); //Correcao de bug
	printf("Digite o número total de horas trabalhadas: ");
	fflush(stdout);
	scanf("%f", &n);

	//Processamento
	if( n > 50){
		e = n - 50;
		n = n - e;
		t = e + n;
		extra = e * 20;
		salario = n * 10;
		salarioTotal = salario + extra;
	}else{
		salario = n * 10;
		t = n;
		extra = 0;
		salarioTotal = salario + extra;
	}

	//Saída
	printf("Você trabalhou: %2.f horas\nSeu salário é: R$ %2.f \nSeu salário extra é: R$ %2.f \nSeu salário total é: R$ %2.f", t, salario, extra, salarioTotal);
}
