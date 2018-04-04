#include <stdio.h>
#include <stdlib.h>

struct Pessoa {
	char Nome;
	char RG;
	int Telefone;
};

int p = 0;
struct Pessoa dados[100];


int Cadastro()
{
	char nome;
	char rg;
	int telefone;

	printf("Realizando novo cadastro \n");
	printf("-------------------------------------------------------------- \n");
	printf("Digite seu nome: ");
	scanf("%c", nome);
	dados[p].Nome = nome;

	printf("Digite seu rg: ");
	scanf("%c", rg);
	dados[p].RG = rg;


	printf("Digite seu telefone: ");
	scanf("%i", telefone);
	dados[p].Telefone = telefone;

	printf("-------------------------------------------------------------- \n");
	printf("Cadastro Realizado com sucesso");
	p++;
	return 0;
}

int Altera(){
	int codigo;
	printf("-------------------------------------------------------------- \n");
	printf("Digite o código da pessoa cadastrada \n");
	printf("-------------------------------------------------------------- \n");
	printf("Código:  ");
	scanf("%i", codigo);
	if (codigo >= 0 && codigo <= 100) {
		printf("-------------------------------------------------------------- \n");
		printf("Realizando uma alteração no cadastro \n");
		scanf("%c", dados[codigo].Nome);
		scanf("%c", dados[codigo].RG);
		scanf("%i", dados[codigo].Telefone);
		printf("-------------------------------------------------------------- \n");
		printf("Alteração realizada com sucesso \n");
	}
	return 0;
}

int Exibe() {
	for (int x = 0; x <= p; x++)
	{
		printf("-------------------------------------------------------------- \n");
		printf("Exibindo Usuários Cadastrados em Ordem");
		printf("-------------------------------------------------------------- \n");
		printf("PESSOA : \n");
         printf(dados[x].Nome);
		 printf(dados[x].RG);
		 printf(dados[x].Telefone);
		printf("-------------------------------------------------------------- \n");
	}

	return 0;
}

int Menu() {
	int i;
	printf("-------------------------------------------------------------- \n");
	printf("Digite [1] para cadastrar uma nova pessoa \n");
	printf("Digite [2] para alterar um cadastro \n");
	printf("Digite [3] para exibir todos as pessoas cadastradas \n");
	printf("Digite [4] para sair: \n");
	printf("-------------------------------------------------------------- \n");
	printf("Digite:  ");
	scanf("%i", i);



int main()
{
	printf("Bem vindo ao cadastro de pessoas \n");
	printf("-------------------------------------------------------------- \n");

	Menu();
	printf("-------------------------------------------------------------- \n");

	return 0;
}
