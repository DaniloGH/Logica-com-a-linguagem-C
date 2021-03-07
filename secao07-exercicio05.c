/* Secao 07 - Exercício 5
 *
 *Faça um programa que leia um nome de usuário e a sua senha e não
 *aceite a senha igual ao nome do usuário, monstrando uma mensagem
 *de erro e voltando a pedir as informações.
 */

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
	//Variáveis
	char usuario[9], senha[9];
	int resultado;

	//Entradas
	printf("Digite o nome de usuário: ");
	fflush(stdout);
	gets(usuario);

	printf("Digite sua senha: ");
	fflush(stdout);
	gets(senha);


	//Processamentos
	resultado = strcmp(usuario, senha);
	if(resultado == 0){
			do {
			printf("Por favor, digite uma senha diferente do nome de usuário.\n");
			printf("Nome de usuário: ");
			fflush(stdout);
			gets(usuario);
			printf("Senha: ");
			fflush(stdout);
			gets(senha);
			resultado = strcmp(usuario, senha);
		} while(resultado == 0);
	}
}

