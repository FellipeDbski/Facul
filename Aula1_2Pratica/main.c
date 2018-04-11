#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int MaiorMenor(){
    int a, b;
    int maior;
    int menor = 9999;
    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    if(a <= menor){
        menor = a;
    }
    printf("Digite o segundo valor: ");
    scanf("%d", &b);
    if(b <= menor){
        menor = b;
        maior = a;
        printf("---------------------------------------------------\n");
        printf("Menor valor: %d\n", menor);
        printf("Maior valor: %d\n", maior);
        printf("---------------------------------------------------\n");
    }
    else if(b >= menor)
        {
        menor = a;
        maior = b;
        printf("---------------------------------------------------\n");
        printf("Menor valor: %d\n", menor);
        printf("Maior valor: %d\n", maior);
        printf("---------------------------------------------------\n");
    }
    return main();
}

int DiaSemana(){
    int dia;
    printf("--------------------------------------------------- \n");
    printf("Digite o valor de 1-7: ");
    scanf("%d", &dia);
    printf("--------------------------------------------------- \n");
    if(dia == 1){
        printf("Domingo \n");
    }
    else if(dia == 2){
        printf("Segunda-Feira \n");
    }
    else if(dia == 3){
        printf("Terça-feira \n");
    }
    else if(dia == 4){
        printf("Quarta-feira \n");
    }
    else if(dia == 5){
        printf("Quinta-Feira \n");
    }
    else if(dia == 6){
        printf("Sexta-Feira \n");
    }
    else if(dia == 7){
        printf("Sábado \n");
    }

    else{
        printf("Digito não possuí um dia da semana especifico \n");
    }
    printf("--------------------------------------------------- \n");
    return main();

}


int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i;
    printf("---------------------------------------------------\n");
    printf("Ola, Selecione o algoritmo desejado\n");
    printf("---------------------------------------------------\n");
    printf("Digite [1] para ir ao algoritmo maior ou menor \n");
    printf("Digite [2] para ir ao algoritmo digito/dia \n");
    printf("---------------------------------------------------\n");
    printf("Digite: ");
    scanf("%d", &i);
    printf("---------------------------------------------------\n");
    if(i == 1){
        MaiorMenor();
    }
    else if(i == 2){
        return DiaSemana();
    }
    else{
        return 0;
    }

    return 0;
}
