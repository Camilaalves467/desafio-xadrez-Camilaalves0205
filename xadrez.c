#include <stdio.h>

// int main (){
//   int a = 0;
//   int jogador1;
//   int opcao;
//   int movimento = 1;

// printf ("***Jogo de Xadrez***\n\n");
// //dando escolha de movimento
// //rodando somente com jogador 1
// //peças serão consideradas unitárias
// printf ("Jogador 1, escolha qual peça irá jogar primeiro: \n");
// printf ("1. Rei \n");
// printf ("2. Rainha \n");
// printf ("3. Bispo \n");
// printf ("4. Cavalo \n");
// printf ("5. Torre \n");
// printf ("6. Peões \n");
// printf ("Escolha uma opção: \n");
// scanf ("%d", &opcao);

// //// repetição WHILE ////
// //    while (a < 3){ // movimentar objeto 3x para a direção
//   //      printf ("Movendo Torre para frente!\n");
//    //     a++;
//    // }

// //// repetição DO WHILE ////
// //    do {
//   //      printf ("Movendo Bispo para cima na diagonal esquerda!\n");
//   //      a++;
//   //  } while (a < 2); // movimentar objeto 2x para a direção

// //// repetição FOR ////
//  //  for (int a = 0; a < 7; a++) // movimentar objeto 7x para a direção
//  // {
//  //      printf ("Movendo Rainha para trás!\n");
//  //  }

// /////////////////////////movimentar cavalo//////////////////// com switch e for 

// switch (opcao)
// {
//     case 1:
//     for (int a = 0; a < 2; a++) // movimentar objeto 2x para a direção
//   {
//     printf ("Rei: Movendo Rei para frente\n"); // SUPONDO QUE O JOGADOR IRÁ ESCOLHER A PEÇA E O MOVIMENTO NA MESMA JOGADA
// }
//     break;
//     case 2:
//     for (int a = 0; a < 5; a++)// movimentar objeto 5x para a direção
//     {
//       printf ("Rainha: Movendo Rainha para frente\n"); // SUPONDO QUE O JOGADOR IRÁ ESCOLHER A PEÇA E O MOVIMENTO NA MESMA JOGADA
//     }
//     break;
//     case 3:
//     for (int a = 0; a < 3; a++)// movimentar objeto 3x para a direção
//     {
//       printf ("Bispo: Movendo Bispo na diagonal esquerda para frente\n"); // SUPONDO QUE O JOGADOR IRÁ ESCOLHER A PEÇA E O MOVIMENTO NA MESMA JOGADA
//     }
//     break;
//     case 4:
//       while (movimento <= 1)
//     {
//         for (int a = 0; a < 2; a++) {// movimentar objeto 4x para a direção
//       printf ("Cavalo: Movendo Cavalo para frente\n"); // SUPONDO QUE O JOGADOR IRÁ ESCOLHER A PEÇA E O MOVIMENTO NA MESMA JOGADA
//     }
//     printf ("Cavalo: Movendo Cavalo para direita \n");
//     movimento++;
//   }
//     break;
//     case 5:
//     for (int a = 0; a < 2; a++) // movimentar objeto 2x para a direção
//   {
//     printf ("Torre: Movendo Torre para frente\n"); // SUPONDO QUE O JOGADOR IRÁ ESCOLHER A PEÇA E O MOVIMENTO NA MESMA JOGADA
// }
//     break;
//     case 6:
//     for (int a = 0; a < 6; a++) // movimentar objeto 6x para a direção
//   {
//     printf ("Peão: Movendo Peão para frente\n"); // SUPONDO QUE O JOGADOR IRÁ ESCOLHER A PEÇA E O MOVIMENTO NA MESMA JOGADA
// }
//     break;
//     default: printf ("Opção Invalida\n\n");
//     break;
// }
////////////// RECURSIVIDADE ///////////////////

void bispo1 (int movimento1){  // mover bispo para a direção
  if (movimento1 > 0){
      printf ("Diagonal direita para cima.\n\n");
      bispo1 (movimento1 - 1);
  }
}

  void torre1 (int movimento2){ // mover torre para a direção 
      if (movimento2 > 0){
          printf ("Direita.\n\n");
          torre1 (movimento2 - 1);
      }
  }

  void rainha1 (int movimento3){ // mover rainha para a direção
  if (movimento3 > 0){
    printf ("Esquerda.\n\n");
    rainha1 (movimento3 - 1);
  }
}

void cavalo1 (int movimento4){  // mover bispo para a direção
  if (movimento4 > 0){
      printf ("Para a Frente\n\n");
      printf ("Para a Frente\n\n");
      printf ("Para a esquerda\n\n");
      cavalo1 (movimento4 - 1);

  }
}

   int main (){ // definindo e imprimindo quantidade de movimentações das peças
  printf ("Movendo Bispo para a diagonal direita para cima\n");
  bispo1 (5);

  printf ("Movendo Torre para a direita\n");
  torre1 (5);

  printf ("Movendo Rainha para a esquerda\n");
  rainha1 (8);

  printf ("Movendo Cavalo\n");
  cavalo1 (1);

  return 0;
       }
         
  


