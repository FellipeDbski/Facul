#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct Pessoa {
	char Nome[30];
	char RG[30];
	int Telefone;
};

int p = 0;
struct Pessoa dados[100];


int cadastro()
{
    printf("-------------------------------------------------------------- \n");
	printf("Realizando novo cadastro \n");
	printf("-------------------------------------------------------------- \n");

	printf("Digite seu nome: ");
	scanf("%s", &dados[p].Nome);

	printf("Digite seu rg: ");
	scanf("%s", &dados[p].RG);

	printf("Digite seu telefone: ");
	scanf("%d", &dados[p].Telefone);
    p++;
    printf("-------------------------------------------------------------- \n");
    menu();


	return 0;
}

int altera(){
	int codigo;
	printf("-------------------------------------------------------------- \n");
	printf("Digite o código da pessoa cadastrada \n");
	printf("-------------------------------------------------------------- \n");
	printf("Código:  ");
	scanf(" %d", &codigo);
	if (codigo >= 0 && codigo <= 100) {
		printf("-------------------------------------------------------------- \n");
		printf("Realizando uma ção no cadastro \n");
		scanf(" %c", &dados[codigo].Nome);
		scanf(" %c", &dados[codigo].RG);
		scanf(" %d", &dados[codigo].Telefone);
		printf("-------------------------------------------------------------- \n");
		printf("Ação realizada com sucesso \n");
	}
	return main();
}

int exibe() {
	for (int x = 0; x < p; x++)
	{
		printf("--------------------------------------------------------------\n");
		printf("Exibindo Usuários Cadastrados em Ordem \n");
		printf("-------------------------------------------------------------- \n");
		printf("CADASTRO Nº%d", x);
         printf("NOME: %s\n", dados[x].Nome);
		 printf("RG: %s\n", dados[x].RG);
		 printf("TELEFONE: %d\n", dados[x].Telefone);
		printf("-------------------------------------------------------------- \n");
	}
	return main();
}

int menu() {
	int i;
	printf("-------------------------------------------------------------- \n");
    printf("Limite de cadastros: %d", p);
    printf("/100 \n");
	printf("-------------------------------------------------------------- \n");
	printf("Digite [1] para cadastrar uma nova pessoa \n");
	printf("Digite [2] para alterar um cadastro \n");
	printf("Digite [3] para exibir todos as pessoas cadastradas \n");
	printf("Digite [4] para sair: \n");
	printf("-------------------------------------------------------------- \n");
	printf("Digite:  ");
	scanf("%d", &i);
	printf("-------------------------------------------------------------- \n");
	if(i == 1){
        return cadastro();
	};
	if(i == 2){
        return altera();
	};
	if(i == 3){
        return exibe();
	}
	else{
        return 0;
	};
}

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
	printf("Bem vindo ao cadastro de pessoas \n");
	printf("-------------------------------------------------------------- \n");
	menu();
	printf("-------------------------------------------------------------- \n");
	return (0);
}
