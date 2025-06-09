#include <stdio.h>
    void teste(int v[10],int tam){
        for (int i = 0; i < tam; i++){
            v[i] *= 2;
        }
    }
    void imprimir(int v[10],int tam){
        for (int i = 0; i < tam; i++){
            printf("%d\n",v[i]);
        }
    }
int main(){
    int vet[10] = {45,13,43,215,64,21,6,8,0,54};

    imprimir(vet,10);
    teste(vet,10);
    printf("valores alterados:\n");
    imprimir(vet,10);
    return 0;
}