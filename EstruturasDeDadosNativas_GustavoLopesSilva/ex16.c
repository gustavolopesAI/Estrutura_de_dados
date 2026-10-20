#include <stdio.h>

typedef struct {
    int hora;
    int minuto;
    int segundo;
} Horario;

int horario_para_segundos(Horario h) {
    return h.hora * 3600 + h.minuto * 60 + h.segundo;
}

Horario segundos_para_horario(int totalSegundos) {
    Horario h;
    h.hora = totalSegundos / 3600;
    h.minuto = (totalSegundos % 3600) / 60;
    h.segundo = totalSegundos % 60;
    return h;
}

void exibe_horario(Horario h) {
    printf("%02d:%02d:%02d\n", h.hora, h.minuto, h.segundo);
}

int main(void) {
    Horario h1, h2;
    int totalSegundos;

    printf("Digite a hora, o minuto e o segundo: ");
    scanf("%d %d %d", &h1.hora, &h1.minuto, &h1.segundo);

    totalSegundos = horario_para_segundos(h1);
    printf("\nHorario ");
    exibe_horario(h1);
    printf("equivale a %d segundos desde a meia-noite.\n", totalSegundos);

    h2 = segundos_para_horario(totalSegundos);
    printf("\nConvertendo de volta %d segundos para horario: ", totalSegundos);
    exibe_horario(h2);

    return 0;
}
