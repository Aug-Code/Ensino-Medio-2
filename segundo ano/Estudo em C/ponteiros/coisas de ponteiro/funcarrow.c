#include <stdio.h>
typedef struct {int dia, ano,mes;}Data;
void imprimirData(Data *p){
    printf("%d/%d/%d",p->dia,p->mes,p->ano);
}
    int main(){
        Data data,*p;
        p = &data;
        printf("Endereço de data: %p\tConteudo de p: %p\n",&data,p);

        data.dia = 29;
        data.mes= 12;
        data.ano = 2009;

        imprimirData(p);
        printf("\n%d/%d/%d\n",data.dia,data.mes,data.ano);
        return 0;
    }