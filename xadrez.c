#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void getBishopMoves(int moves) {
  printf("\nBispo\n");
  while (moves > 0)
  {
    printf("Cima\n");
    printf("Direita\n");
    moves--;
  }
}

void getRookMoves(int moves) {
  printf("\nTorre\n");
  while (moves > 0)
  {
    printf("Direita\n");
    moves--;
  }
}

void getKingMoves(int moves) {
  printf("\nRainha\n");
  while (moves > 0)
  {
    printf("Esquerda\n");
    moves--;
  }
}

void getKnightMoves(int moves[2]) {
  printf("\nCavalo\n");
  for (int i = 1; i <= moves[1]; i++)
  {
    for (int j = 1; j <= moves[0]; j++)
    {
      printf("Cima\n");
    }
    printf("Direita\n"); 
  }
}

int main()
{
  // Nível Novato - Movimentação das Peças
  // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
  int bishopMoves = 5;
  int rookMoves = 5;
  int queenMoves = 8;
  int knightMoves[2] = {2, 1};
  // Implementação de Movimentação do Bispo
  // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
  getBishopMoves(bishopMoves);

  // Implementação de Movimentação da Torre
  // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
  getRookMoves(rookMoves);

  // Implementação de Movimentação da Rainha
  // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
  getKingMoves(queenMoves);

  // Nível Aventureiro - Movimentação do Cavalo
  // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
  // Um loop pode representar a movimentação horizontal e outro vertical.
  getKnightMoves(knightMoves);

  // Nível Mestre - Funções Recursivas e Loops Aninhados
  // Sugestão: Substitua as movimentações das peças por funções recursivas.
  // Exemplo: Crie uma função recursiva para o movimento do Bispo.

  // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
  // Inclua o uso de continue e break dentro dos loops.

  return 0;
}
