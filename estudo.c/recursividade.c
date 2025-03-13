////////////// RECURSIVIDADE ///////////////////
#include <stdio.h>

    void bispo1 (int movimento1){
    if (movimento1 > 0){
        printf ("Diagonal direita para cima.\n\n");
        bispo1 (movimento1 - 1);
    }
}
 
    void torre1 (int movimento2){
        if (movimento2 > 0){
            printf ("Direita.\n\n");
            torre1 (movimento2 - 1);
        }
    }

    void rainha1 (int movimento3){
    if (movimento3 > 0){
      printf ("Esquerda.\n\n");
      rainha1 (movimento3 - 1);
    }
}
     int main (){
    printf ("Movendo Bispo para a diagonal direita para cima\n");
    bispo1 (5);

    printf ("Movendo Torre para a direita\n");
    torre1 (5);

    printf ("Movendo Rainha para a esquerda\n");
    rainha1 (8);
         }
  
        
        
        

