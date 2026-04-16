#include <stdio.h>

int main(){
    // Torre: move 5 casas para a direita
    printf("\nTorre: \n\n");
    for (int a = 0; a < 5; a++) {
        printf("Direita\n");
    }

    // Bispo: move 5 casas para cima, direita
    printf("\nBispo: \n\n");
    int b = 0; 
    while (b < 5) { 
        printf("Cima, Direita\n");
        b++;
    }

    // Rainha: move 8 casas para a esquerda
    printf("\nRainha: \n\n");
    int i = 0;
    do {
        printf("Esquerda\n");
        i++; 
    } while (i < 8);

    return 0;
}