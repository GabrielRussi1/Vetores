// Invertendo os elementos de um vetor
// Gabriel Russi

#include <stdio.h>

int main() {
    int vetor[5] = {10, 20, 30, 40, 50};
    int i;

    printf("Os elementos do vetor na ordem inversa sao:\n");
    for (i = 4; i >= 0; i--) {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}
