#include <stdio.h>

/*
 * Função recursiva da Torre
 * Move 5 casas para a direita.
 */
void moverTorre(int casas) {
    if (casas == 0) {
        return;
    }

    printf("Direita\n");
    moverTorre(casas - 1);
}

/*
 * Função recursiva da Rainha
 * Move 8 casas para a esquerda.
 */
void moverRainha(int casas) {
    if (casas == 0) {
        return;
    }

    printf("Esquerda\n");
    moverRainha(casas - 1);
}

/*
 * Função recursiva do Bispo.
 * A cada chamada recursiva executa
 * loops aninhados:
 *
 * Loop externo = movimento vertical
 * Loop interno = movimento horizontal
 *
 * Resultado: Cima Direita
 */
void moverBispo(int casas) {
    if (casas == 0) {
        return;
    }

    int vertical;
    int horizontal;

    for (vertical = 1; vertical <= 1; vertical++) {
        for (horizontal = 1; horizontal <= 1; horizontal++) {
            printf("Cima Direita\n");
        }
    }

    moverBispo(casas - 1);
}

int main() {

    /* Quantidade de movimentos */
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    printf("\n");

    printf("Movimento do Bispo:\n");
    moverBispo(casasBispo);

    printf("\n");

    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);

    printf("\n");

    /*
     * Movimento do Cavalo
     * Duas casas para cima
     * Uma casa para a direita
     *
     * Loops aninhados com:
     * - múltiplas variáveis
     * - continue
     * - break
     */
    printf("Movimento do Cavalo:\n");

    int vertical;
    int horizontal;

    for (vertical = 1; vertical <= 2; vertical++) {

        printf("Cima\n");

        for (horizontal = 1; horizontal <= 2; horizontal++) {

            if (vertical < 2) {
                continue;
            }

            printf("Direita\n");
            break;
        }
    }

    return 0;
}