#include <stdio.h>
int main (){
    char *p, letra = 'f';
    p = &letra;
    printf("valor da letra: %c\n",letra);
    printf("endereço da letra %p\n",&letra);
    printf("valor de p: %p\n",p);
    printf("Endereço de p : %p\n",&p);
    printf("Valor apontado por p: %C\n",*p);

    return 0;
}