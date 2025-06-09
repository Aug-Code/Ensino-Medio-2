#include <stdio.h>
#include <string.h>

typedef struct {char nome[50]; int idade;float nota;} Aluno;

int main() {
    Aluno augusto[3];
    int n = 50;
    int i,menor = 0,maior = 0,aux,aux2;
    for(i = 0; i < 3; i ++ ){
        printf("aluno %dº:\n",i+1);
        printf("Informe o nome do aluno: ");
        fgets(augusto[i].nome,n,stdin);
        printf("informe a idade: ");
        scanf("%d",&augusto[i].idade);
        printf("informe a nota: ");
        scanf("%f",&augusto[i].nota);
        getchar();
    }  
    for ( i = 0; i < 3; i++){
    printf("\nDados do %dº:\nNome: %sIdade: %d\nNota: %.2f\n",i+1,augusto[i].nome, augusto[i].idade, augusto[i].nota);
        if (i == 0){
            menor = augusto[i].nota;
        }
        if(menor > augusto[i].nota){
            menor = augusto[i].nota;
            aux = i;
        }else if(maior <= augusto[i].nota){
            maior = augusto[i].nota;
            aux2 = i;
        }
        
    }
    printf("menor nota:%s",augusto[aux].nome);
    printf("maior nota:%s",augusto[aux2].nome);
    
    return 0;
}