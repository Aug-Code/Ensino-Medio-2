#include <stdio.h>
#include <stdlib.h>

int main() {
    int v[5], i;
    int *p = v; //sempre que for vetor não pode colocar p = &v[5]

    for (i = 0; i < 5; i++) {
        printf("Informe o valor %d: ", i + 1);
        scanf("%d", (p + i));
    }
    for (i = 0; i < 5; i++) {
        printf("O valor da posição [%d] é igual a: %d\n", i, *p++);
    }

    return 0;
}
