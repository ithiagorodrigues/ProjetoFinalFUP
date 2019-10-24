#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int escolha;

void traducaoelimpeza ()
{
    system("clear");
    setlocale(LC_ALL, "portuguese");
}

void menu ()
{
    traducaoelimpeza();
    printf("\n----------------------------------------------------------------------\n");
    printf("\n                          SEJA BEM VINDO AO");
    printf("\n                          CALABOUÇO DA MORTE");
    printf("\n           Aventuras Fantásticas – Vol 5 – Ian Livingstone");
    printf("\n                    Adaptação: Thiago Rodrigues");
    printf("\n\n                        ESCOLHA UMA OPÇÃO");
    printf("\n                               1º JOGAR");
    printf("\n                               2º AJUDA");
    printf("\n                               3º SAIR");
    printf("\n\n----------------------------------------------------------------------\n\n");
    scanf("%d",&escolha);
    switch (escolha)
    {
    case 1:
        fase1;
        break;
    case 2:
        printf("2");
        break;
    case 3:
        printf("3");
        break;

    default:
    printf("Hello Word");
        break;
    }
}

void main ()
{
    menu();
}
