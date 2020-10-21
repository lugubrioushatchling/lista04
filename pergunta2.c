#include <stdio.h>

int main() {
    struct stt_horario {
        int hora;
        int minutos;
        int segundos;
    };
    struct stt_data {
        int dia;
        int mes;
        int ano;
    };
    struct stt_compromisso {
        struct stt_horario thorario;
        struct stt_data tdata;
        char descricao[200];
    };

struct stt_compromisso tcompromisso;

printf("Digite o horario do seu compromisso:\n");
printf("Hora: ");
scanf("%d", &tcompromisso.thorario.hora);
printf("Minutos: ");
scanf("%d", &tcompromisso.thorario.minutos);
printf("Segundos: ");
scanf("%d", &tcompromisso.thorario.segundos);

printf("Qual a data? \n");
printf("Dia: ");
scanf("%d", &tcompromisso.tdata.dia);
printf("Mes: ");
scanf("%d", &tcompromisso.tdata.mes);
printf("Ano: ");
scanf("%d", &tcompromisso.tdata.ano);
fflush(stdin);
printf("Comentario adicional (200 caractes): ");
fgets(tcompromisso.descricao, 200, stdin);

printf("\n\nTens compromisso as %d:%d':%d''", tcompromisso.thorario.hora, tcompromisso.thorario.minutos, tcompromisso.thorario.segundos);
printf("\nNo dia %d do %d de %d", tcompromisso.tdata.dia, tcompromisso.tdata.mes, tcompromisso.tdata.ano);
printf("\nComentarios: %s", tcompromisso.descricao);

return 0;
}
