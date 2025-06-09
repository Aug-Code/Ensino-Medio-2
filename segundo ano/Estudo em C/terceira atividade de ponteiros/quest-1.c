/*Enunciado:
Dada a matriz:
int mat[2][3] = {{1, 2, 3}, {4, 5, 6}};
Escreva um programa que imprima todos os elementos da matriz usando apenas
ponteiros (sem usar mat[i][j]).*/
#include <stdio.h>
int main(){
    int mat[2][3] = {{1, 2, 3}, {4, 5, 6}},i,j;
    int *p = &mat[0][0];
    for(i=0;i<2;i++){
        for ( j = 0; j < 3; j++){
            printf("%d\t",p[i*3+j]);
        }printf("\n");
        
    }
}
// printf("%d\t",(p+i));