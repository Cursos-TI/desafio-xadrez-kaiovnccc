#include <stdio.h>

    // Torre: move 5 casas para direita; (recursivo)
    void moverTorre(int casas) {
        if (casas > 0) {
            printf("Direita\n");
            moverTorre(casas - 1);
        }
    }

    // Bispo: move 5 casas para cima, direita; (recursivo + loops aninhados)
    void moverBispo(int casas) {
    if (casas > 0) {

        for (int i = 0; i < 1; i++) { // Vertical
            printf("Cima\n");

            for (int j = 0; j < 1; j++) { // Horizontal
                printf("Direita\n");
            }
        }

        moverBispo(casas - 1);
        }
    }

    // Rainha: move 8 casas para a esquerda; (recursivo)
   void moverRainha(int casas) {
        if (casas > 0) {
            printf("Esquerda\n");
            moverRainha(casas - 1);
        }
    }

    // Cavalo: move 2 casas para cima, e 1 casa para a direita; (loops + controle de fluxo)
    void moverCavalo() {

    for (int i = 0; i < 3; i++) {

        if (i < 2) {
            printf("Cima\n");
            continue;
        }

        if (i == 2) {
            printf("Direita\n");
            break;
            }
        }
    }
        
    int main() {

        printf("\nTorre: \n\n");
        moverTorre(5);

        printf("\nBispo: \n\n");
        moverBispo(5);

        printf("\nRainha: \n\n");
        moverRainha(8);

        printf("\nCavalo: \n\n");
        moverCavalo();

        return 0;
    }