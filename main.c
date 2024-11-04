#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroSecreto, chute, tentativas = 0;
    srand(time(0));
    numeroSecreto = rand() % 100 + 1;

    printf("Bem-vindo ao jogo Adivinhe o Numero!\n");
    printf("Tente adivinhar o número secreto entre 1 e 100.\n");

    do {
        printf("Digite seu palpite: ");
        scanf("%d", &chute);
        tentativas++;

        if (chute > numeroSecreto) {
            printf("Palpite muito alto! Tente novamente.\n");
        } else if (chute < numeroSecreto) {
            printf("Palpite muito baixo! Tente novamente.\n");
        } else {
            printf("Parabens! Você acertou o numero em %d tentativas!\n", tentativas);
        }
    } while (chute != numeroSecreto);

    return 0;
}


