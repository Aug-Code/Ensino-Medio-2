/*Enunciado:
Utilize a struct Aluno com os campos: nome[30] e nota.
Crie uma matriz 2x2 de alunos.
Preencha os dados e, com ponteiros, encontre e exiba o nome do aluno com a maior
nota da matriz.*/
//gostei usar esse metodo de novo
#include <stdio.h>
#include <stdlib.h>

typedef struct {char nome[30];float nota;} Aluno;

int main() {
    Aluno aug[2][2];
    Aluno *p, *maiorAluno = NULL;
    int i, j;

    for (i = 0; i < 2; i++) {
        printf("Turma %d:\n", i + 1);
        for (j = 0; j < 2; j++) {
            printf("Informe o nome do aluno %d da turma %d: ", j+1,i+1);
            fgets(aug[i][j].nome, 30, stdin);
            printf("Informe a nota do aluno %d da turma %d: ", j+1, i + 1);
            scanf("%f", &aug[i][j].nota);
            getchar();
        }
        printf("\n");
    }

    maiorAluno = &aug[0][0];
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            p = &aug[i][j];
            if (p->nota > maiorAluno->nota) {
                maiorAluno = p;
            }
        }
    }
    printf("A maior nota: %.2f\n", maiorAluno->nota);
    printf("Nome do aluno: %s", maiorAluno->nome);
    return 0;
}