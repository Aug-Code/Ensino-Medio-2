#include <stdio.h>
typedef struct {int dia, mes, ano;} Data;
typedef struct { char nomeDoEvento[100]; Data data; } Evento;

int main() {
    Evento evento;
    
    printf("Informe o nome do evento: ");
    fgets(evento.nomeDoEvento,500, stdin);
    printf("Informe o Dia/Mes/Ano: ");
    scanf("%d/%d/%d", &evento.data.dia, &evento.data.mes, &evento.data.ano);
    //tem que escrever assim na hora que aprecer "Informe o Dia/Mes/Ano: 12/23/5453 " caso escreva 12 23 e 5453 vai da errado
    printf("Evento: %s Data: %d/%d/%d\n", evento.nomeDoEvento, evento.data.dia, evento.data.mes, evento.data.ano);

    return 0;
}