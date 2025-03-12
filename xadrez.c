#include <stdio.h>

int main (){
  int a = 0;
  int jogador1;
  int opcao;
  int movimento = 1;

printf ("***Jogo de Xadrez***\n\n");
//dando escolha de movimento
//rodando somente com jogador 1
//peças serão consideradas unitárias
printf ("Jogador 1, escolha qual peça irá jogar primeiro: \n");
printf ("1. Rei \n");
printf ("2. Rainha \n");
printf ("3. Bispo \n");
printf ("4. Cavalo \n");
printf ("5. Torre \n");
printf ("6. Peões \n");
printf ("Escolha uma opção: \n");
scanf ("%d", &opcao);

switch (opcao)
{
    case 1:
    for (int a = 0; a < 2; a++) // movimentar objeto 2x para a direção
  {
    printf ("Rei: Movendo Rei para frente\n"); // SUPONDO QUE O JOGADOR IRÁ ESCOLHER A PEÇA E O MOVIMENTO NA MESMA JOGADA
}
    break;
    case 2:
    for (int a = 0; a < 5; a++)// movimentar objeto 5x para a direção
    {
      printf ("Rainha: Movendo Rainha para frente\n"); // SUPONDO QUE O JOGADOR IRÁ ESCOLHER A PEÇA E O MOVIMENTO NA MESMA JOGADA
    }
    break;
    case 3:
    for (int a = 0; a < 3; a++)// movimentar objeto 3x para a direção
    {
      printf ("Bispo: Movendo Bispo na diagonal esquerda para frente\n"); // SUPONDO QUE O JOGADOR IRÁ ESCOLHER A PEÇA E O MOVIMENTO NA MESMA JOGADA
    }
    break;
    case 4:
      while (movimento <= 1)
    {
        for (int a = 0; a < 2; a++) {// movimentar objeto 4x para a direção
      printf ("Cavalo: Movendo Cavalo para frente\n"); // SUPONDO QUE O JOGADOR IRÁ ESCOLHER A PEÇA E O MOVIMENTO NA MESMA JOGADA
    }
    printf ("Cavalo: Movendo Cavalo para direita \n");
    movimento++;
  }
    break;
    case 5:
    for (int a = 0; a < 2; a++) // movimentar objeto 2x para a direção
  {
    printf ("Torre: Movendo Torre para frente\n"); // SUPONDO QUE O JOGADOR IRÁ ESCOLHER A PEÇA E O MOVIMENTO NA MESMA JOGADA
}
    break;
    case 6:
    for (int a = 0; a < 6; a++) // movimentar objeto 6x para a direção
  {
    printf ("Peão: Movendo Peão para frente\n"); // SUPONDO QUE O JOGADOR IRÁ ESCOLHER A PEÇA E O MOVIMENTO NA MESMA JOGADA
}
    break;
    default: ("Opção Invalida");
    break;
}
return 0;
}
