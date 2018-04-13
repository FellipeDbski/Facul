#include <stdio.h>
#include <stdlib.h>

struct Pessoas {
    char Nome, cpf;
};

struct Pessoas pessoa[1];

int Ordenar(int qtd){
int x;
char ch, aux[70];
}
int Cadastrar(int*qtd){
    if(*qtd >= 199){
        printf("não é possivel cadastrar mais pessoas");
    }
    else{
        printf("Digite o nome:");
        scanf("%s", &pessoa[*qtd].Nome);

        printf("Digite o cpf: ");
        scanf("%s", &pessoa[*qtd].cpf);
        qtd++;
    }

    Ordenar();
}
int Atualizar(int qtd){
}
int Listar(int qtd){

}
int Menu(){
    int op;
    printf("--------------------------------------------\n");
    printf("--------------------------------------------\n");
    printf("[1] para cadastro \n");
    printf("[2] para atualizar \n");
    printf("[3] para listar \n");
    printf("[4] para cancelar \n");
    printf("--------------------------------------------\n");
    printf("Escolha: ");
    scanf("%i", &op);
    printf("--------------------------------------------\n");
    printf("--------------------------------------------\n");

    return(op);
}


int main()
{

    int op, qtd = 0;

    do
    {
     op = Menu();
     switch(op)
     {
         case 1: Cadastrar(&qtd); break;
         case 2: Atualizar(qtd); break;
         case 3: Listar(qtd); break;
     }
    }
    while(op == 4);

    return 0;
}

