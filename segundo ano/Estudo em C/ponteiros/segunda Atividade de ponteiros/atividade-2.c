#include <stdio.h>
#include <stdlib.h>

typedef struct {char nome[30];float nota;} Aluno;


int main() {
    Aluno augusto[3][2],*p;
    int i, j;

    for (i = 0; i < 3; i++) {
        printf("Turma %d:\n", i + 1);
        for (j = 0; j < 2; j++) {
            printf("Informe o nome do aluno %d da turma %d: ",j+1,i+1);
            fgets(augusto[i][j].nome,500, stdin);
            printf("Informe a nota do aluno %d da turma %d: ",j+1,i+1);
            scanf("%f", &augusto[i][j].nota);
            getchar();
        }
        printf("\n");
    }
    float soma, media;
    for (i = 0; i < 3; i++) {
        soma = 0.0f;
        for (j = 0; j < 2; j++) {
            p =&augusto[i][j];
            soma += p->nota;
        }
        media = soma / 2;
        printf("A média da turma %d é: %.2f\n", i + 1, media);
    }
    return 0;
}