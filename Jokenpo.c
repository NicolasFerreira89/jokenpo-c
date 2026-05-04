#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    int escolhaJogador, escolhaPC;
    srand(time(0));

    printf("\nJokenpô!\n");
    printf("Escolha uma opção: \n");
    printf("1: Pedra \n");
    printf("2: Papel \n");
    printf("3: Tesoura \n");

    printf("Escolha: ");
    scanf("%d", &escolhaJogador);

    escolhaPC = rand() % 3 + 1;

    switch (escolhaJogador)
    {
    case 1:
        printf("Jogador: Pedra - ");
        break;
    case 2:
        printf("Jogador: Papel - ");
        break;
    case 3:
        printf("Jogador: Tesoura - ");
        break;
    default:
        printf("Opção Inválida!!");
        break;
    }

    switch (escolhaPC)
    {
    case 1:
        printf("PC: Pedra\n");
        break;
    case 2:
        printf("PC: Papel\n");
        break;
    case 3:
        printf("PC: Tesoura\n");
        break;
    }

    if (escolhaPC == escolhaJogador)
    {
        printf(" Empate!\n");
    }
    else if ((escolhaJogador == 1) && (escolhaPC == 3) || (escolhaJogador == 2) && (escolhaPC == 1) || (escolhaJogador == 3) && (escolhaPC == 2))
    {
        printf("Você Venceu!!\n");
    }
    else
    {
        printf("Você Perdeu!!:(\n");
    }

    return 0;
}