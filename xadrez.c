#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int i = 0;
    char escolhapeça;
    int opcaoValida;
    int cavalomove = 1;
    printf("Desafio de movimentos de peças de xadrez - Nível Novato\n\n");
    // Menu para selecionar qual peça o usuário deseja usar. uso de menu switch
    //Uso de 'do-while' para repetir o menu em caso de 'default'
do{
    opcaoValida = 1; //assume que as opções são validas
    printf("Seleção de peças de Xadrez\n");
    printf("B - Bispo\n");
    printf("R - Rainha\n");
    printf("T - Torre\n");
    printf("C - Cavalo\n");
    printf("Escolha qual sua peça: ");
    scanf(" %c", &escolhapeça);

    switch(escolhapeça)
    {
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    case 'B':
    case 'b':
        printf("Peça escolhida: Bispo\n");
        for(i = 0; i < 5; i++){
            printf("Direita"); printf("Cima\n");
        }
        break;

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda. 
    case 'R':
    case 'r':
        printf("Peça escolhida: Rainha\n");
        do
        {
            printf("esquerda\n");
            i++;
        } while(i < 8);
        break;

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    case 'T':
    case 't':
        printf("Peça escolhida: Torre\n");
        while (i < 5)
        {
            printf("direita\n");
            i++;
        }
        break;

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    case 'C':
    case 'c':
        while (cavalomove--)
        {
            for(i = 0; i < 2; i++){
                printf("Baixo\n");
            }
            printf("Esquerda\n");
        }
        break;
    default:
        printf("\nPeça nâo cadastrada! Retornando ao menu de seleção\n");
        opcaoValida = 0; //assume que a opção é inválida
        break;
    }
} while(opcaoValida == 0);

    

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
