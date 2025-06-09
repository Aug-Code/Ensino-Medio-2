/*Enunciado:
Crie uma struct chamada Produto com os campos: nome[30] e preco.
Crie uma variável do tipo Produto, preencha os dados via teclado e use um ponteiro
para struct para imprimir as informações armazenadas.*/
#include <stdio.h>
#include <stdlib.h>
typedef struct{char nome[30];float preco;}Produto;


int main(){
    Produto p;
    Produto *ptr = &p;
    printf("Informe o nome do produto: ");
    fgets(ptr->nome,30,stdin);
    printf("digite o preco do produto: ");
    scanf("%f",&ptr->preco);
    getchar();

    printf("produto:  %s\npreco: %.2f",ptr->nome,ptr->preco);
}