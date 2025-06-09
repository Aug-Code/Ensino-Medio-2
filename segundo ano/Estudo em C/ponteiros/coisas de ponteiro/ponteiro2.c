#include <stdio.h>
void imprimir(int *m){
    printf("%d\n",*m);
    *m = 80;
}
    int main(){
        int idade = 35;
        imprimir(&idade);
        printf("no main: %d\n",idade);
        return 0;
    }