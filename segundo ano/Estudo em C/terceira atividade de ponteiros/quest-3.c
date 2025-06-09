/*Enunciado:
Crie uma struct chamada Funcionario com os campos: nome[40] e salario.
Declare uma matriz Funcionario equipe[2][2].
Preencha os dados com entrada do usuário e, usando ponteiros, imprima o nome e
salário de cada funcionário.*/
#include <stdio.h>
typedef struct{char nome[40];float salario;}Funcionario;
int main(){
    Funcionario m[2][2];
    Funcionario *p;
    int i,j;
    for ( i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            printf("Informe o nome: ");
            fgets(m[i][j].nome,40,stdin);
            getchar();
            printf("informe o salario: ");
            scanf("%f",&m[i][j].salario);
        }
    }
    for ( i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            p = &m[i][j];
            printf("funcionario: %s",p->nome);
            printf("salario: %.2f",p->salario);

        }
    }
    
}