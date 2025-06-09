#include <stdio.h>

typedef struct { 
    char nome[50]; int idade;float nota;
} Aluno;

int main() {
    Aluno augusto;
    
    printf("Informe o nome do aluno: ");
    fgets(augusto.nome, sizeof(augusto.nome), stdin);
    printf("Informe a idade do aluno: ");
    scanf("%d", &augusto.idade);
    printf("Informe a nota do aluno: ");
    scanf("%f", &augusto.nota);
    getchar();
    
    printf("Dados do aluno:\nNome: %sIdade: %d\nNota: %.2f\n", augusto.nome, augusto.idade, augusto.nota);
    
    return 0;
}