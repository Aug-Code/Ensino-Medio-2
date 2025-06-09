#include <stdio.h>
typedef struct {char nome[50]; int idade;float nota;} Aluno;
void altera_Nota(Aluno *a, float x){
    a->nota=x;
}

int main(){
    Aluno augusto;
    int n =50;
    char resp;
    float notaalt;
    //leitura
    printf("Informe o nome do aluno: ");
    fgets(augusto.nome, n, stdin);
    printf("Informe a idade do aluno: ");
    scanf("%d", &augusto.idade);
    printf("Informe a nota do aluno: ");
    scanf("%f", &augusto.nota);
    printf("deseja aletera a nota: ");
    scanf(" %c",&resp);
    //caso se for 
    if(resp == 'n' ||resp =='N')
    printf("Dados do aluno:\nNome: %sIdade: %d\nNota: %.2f\n", augusto.nome, augusto.idade, augusto.nota);
    while (resp == 's' || resp == 'S'){
        printf("informe a nova nota: ");
        scanf("%f",&notaalt);
        altera_Nota(&augusto,notaalt);
        printf("Dados do aluno apos ser alterada:\nNome: %sIdade: %d\nNota: %.2f\n", augusto.nome, augusto.idade, augusto.nota);
        resp = 'n';
    }
    

}