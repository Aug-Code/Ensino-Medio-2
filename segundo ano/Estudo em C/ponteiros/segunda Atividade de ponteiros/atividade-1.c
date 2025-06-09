/*Enunciado:
Crie uma struct chamada Aluno com os campos: nome[30] e nota.
Declare uma matriz 2x2 de Aluno e preencha os dados usando entrada do usuário.
Depois, utilizando ponteiros, exiba os dados de todos os alunos.*/
#include <stdlib.h>
#include <stdio.h>

typedef struct {char nome[50];  float nota;} Aluno;

int main() {
    Aluno augusto[2][2],*p;
    int i, j;

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("Informe o nome do aluno: "); 
            fgets(augusto[i][j].nome, 500, stdin);
            printf("Informe a nota do aluno: ");
            scanf("%f",&augusto[i][j].nota);
             getchar();
        }
    }
    for ( i = 0; i <2; i++){
        printf("Aluno nota de todos alunos");
        for ( j = 0; j < 2; j++){
             p = &augusto[i][j];
             printf("\nnome:%s",p->nome);
             printf("nota:%.2f",p->nota);
        }
        
    }
    return 0;
}