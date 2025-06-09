#include <stdio.h>
#include <stdlib.h>
typedef struct{char nome[100];int idade;}Aluno;

int main(){
    Aluno breno;
    printf("informe o nome do estudante: ");
    fgets(breno.nome,255,stdin);
    printf("informe a idade do aluno:");
    scanf("%d",&breno.idade);
    getchar();

    printf("\nAluno: %sIdade: %d",breno.nome,breno.idade);
}