#include <stdio.h>
#include <stdlib.h>

typedef struct {char nome[30];float nota;} Aluno;

int main() {
    Aluno augusto[3][2], *p;
    int i, j, aux = 0;
    float menor = 0.0f, maior = 0.0f;
    char nome[3][30];

    for (i = 0; i < 3; i++) {
        printf("Turma %d:\n", i + 1);
        for (j = 0; j < 2; j++) {
            printf("Informe o nome do aluno %d da turma %d: ", j + 1, i + 1);
            fgets(augusto[i][j].nome, 30, stdin); 
            printf("Informe a nota do aluno %d da turma %d: ", j + 1, i + 1);
            scanf("%f", &augusto[i][j].nota);
            getchar();
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            p = &augusto[i][j];
            for (int k = 0; k < 30; k++) {
                nome[j][k] = p->nome[k];
            }

            if (i == 0 && j == 0) {
                menor = p->nota;
                maior = p->nota;
                aux = 0;
            }

            if (p->nota < menor) {
                menor = p->nota;
            } else if (p->nota > maior) {
                maior = p->nota;
                aux = j;
            }
        }
    }

    printf("A maior nota: %.2f\n", maior);
    printf("Nome do aluno: %s", nome[aux]);

    return 0;
}
