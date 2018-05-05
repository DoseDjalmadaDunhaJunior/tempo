#include <stdio.h>

#define sAno 31536000
#define sMes 2592000
#define sSem 604800
#define sDia 86400
#define sHor 3600
#define sMin 60

void imprime(float* temp){
    printf("==================\n"
                   "%.0f Anos\n"
                   "%.0f Meses\n"
                   "%.0f Semanas\n"
                   "%.0f Dias\n"
                   "%.0f Horas\n"
                   "%.0f Minutos\n"
                   "%.0f Segundos\n"
                   "==================\n", temp[0],temp[1],
           temp[2],temp[3],temp[4],temp[5],temp[6]);
}

int Generico(float* a, int tam) {
    int c = 0;
    float aux = *a;
    while (aux >= tam){
        aux = aux - tam;
        c++;
    }
    *a = aux;
    return c;
}

void Revisao(int tam, float* gg, float* pp){
    float g = *gg, p = *pp;
    int c = 0;
    if(g != 0 || p != 0){
        while (p >= tam){
            p = p - tam;
            c++;
        }
    }

    *gg = g + c;
    *pp = p;
}

void tudoSegundo(float* temp) {
    temp[6] = temp[6] + (temp[0] * sAno);
    temp[0] = 0;

    temp[6] = temp[6] + (temp[1] * sMes);
    temp[1] = 0;

    temp[6] = temp[6] + (temp[2] * sSem);
    temp[2] = 0;

    temp[6] = temp[6] + (temp[3] * sDia);
    temp[3] = 0;

    temp[6] = temp[6] + (temp[4] * sHor);
    temp[4] = 0;

    temp[6] = temp[6] + (temp[5] * sMin);
    temp[5] = 0;
}

void converte(float* temp, int pos, int tam){
    temp[pos] = temp[6] / tam;
}

void converteAno(float* temp) {
    int op;
    puts("Deseja Converter para:\n"
                 "1 - Mes\n"
                 "2 - Semana\n"
                 "3 - Dia\n"
                 "4 - Hora\n"
                 "5 - Minuto\n"
                 "6 - Segundo");
    scanf("%i", &op);

    float doze;
    puts("Insira Quantos Anos");
    scanf("%f", &doze);
    temp[0] = doze;
    tudoSegundo(temp);
    if (op == 1) {
        converte(temp,1,sMes);
        printf("Sao %.0f Meses\n", temp[1]);

    } else if (op == 2) {
        converte(temp,2,sSem);
        printf("Sao %.0f Semanas\n", temp[2]);
    } else if (op == 3) {
        converte(temp,3,sDia);
        printf("Sao %.0f Dias\n", temp[3]);
    } else if (op == 4) {
        converte(temp,4,sHor);
        printf("Sao %.0f Horas\n", temp[4]);
    } else if (op == 5) {
        converte(temp,5,sMin);
        printf("Sao %.0f Minutos\n", temp[5]);
    } else if (op == 6) {
        printf("Sao %.0f Segundos\n", temp[6]);
    } else {
        puts("Opcao não Aceita");
    }
}

void converteMes(float* temp) {
    int op;
    puts("Deseja Converter para:\n"
                 "1 - Ano\n"
                 "2 - Semana\n"
                 "3 - Dia\n"
                 "4 - Hora\n"
                 "5 - Minuto\n"
                 "6 - Segundo\n");
    scanf("%i", &op);
    float doze;
    puts("Insira Quantos Meses");
    scanf("%f", &doze);
    temp[1] = doze;
    tudoSegundo(temp);

    if (op == 1) {
        converte(temp,0,sAno);
        printf("Sao %.0f Anos\n", temp[0]);
    } else if (op == 2) {
        converte(temp,2,sSem);
        printf("Sao %.0f Semanas\n", temp[2]);
    } else if (op == 3) {
        converte(temp,3,sDia);
        printf("Sao %.0f Dias\n", temp[3]);
    } else if (op == 4) {
        converte(temp,4,sHor);
        printf("Sao %.0f Horas\n", temp[4]);
    } else if (op == 5) {
        converte(temp,5,sMin);
        printf("Sao %.0f Minutos\n", temp[5]);
    } else if (op == 6) {
        printf("Sao %.0f Segundos\n", temp[6]);
    } else {
        puts("Opcao não Aceita");
    }
}

void converteSemana(float* temp) {
    int op;
    puts("Deseja Converter para:\n"
                 "1 - Ano\n"
                 "2 - Mes\n"
                 "3 - Dia\n"
                 "4 - Hora\n"
                 "5 - Minuto\n"
                 "6 - Segundo");
    scanf("%i", &op);
    float doze;
    puts("Insira Quantas Semanas");
    scanf("%f", &doze);
    temp[2] = doze;
    tudoSegundo(temp);

    if (op == 1) {
        converte(temp,0,sAno);
        printf("Sao %.0f Anos\n", temp[0]);
    } else if (op == 2) {
        converte(temp,1,sMes);
        printf("Sao %.0f Meses\n", temp[1]);
    } else if (op == 3) {
        converte(temp,3,sDia);
        printf("Sao %.0f Dias\n", temp[3]);
    } else if (op == 4) {
        converte(temp,4,sHor);
        printf("Sao %.0f Horas\n", temp[4]);
    } else if (op == 5) {
        converte(temp,5,sMin);
        printf("Sao %.0f Minutos\n", temp[5]);
    } else if (op == 6) {
        printf("Sao %.0f Segundos\n", temp[6]);
    } else {
        puts("Opcao não Aceita");
    }
}

void converteDia(float* temp) {
    int op;
    puts("Deseja Converter para:\n"
                 "1 - Ano\n"
                 "2 - Mes\n"
                 "3 - Semana\n"
                 "4 - Hora\n"
                 "5 - Minuto\n"
                 "6 - Segundo");

    scanf("%i", &op);
    float doze;
    puts("Insira Quantos Dias");
    scanf("%f", &doze);
    temp[3] = doze;
    tudoSegundo(temp);

    if (op == 1) {
        converte(temp,0,sAno);
        printf("Sao %.0f Anos\n", temp[0]);
    } else if (op == 2) {
        converte(temp,1,sMes);
        printf("Sao %.0f Meses\n", temp[1]);
    } else if (op == 3) {
        converte(temp,2,sSem);
        printf("Sao %.0f Semanas\n", temp[2]);
    } else if (op == 4) {
        converte(temp,4,sHor);
        printf("Sao %.0f Horas\n", temp[4]);
    } else if (op == 5) {
        converte(temp,5,sMin);
        printf("Sao %.0f Horas\n", temp[5]);
    } else if (op == 6) {
        printf("Sao %.0f Segundos\n", temp[6]);
    } else {
        puts("Opcao não Aceita");
    }
}

void converteHora(float* temp) {
    int op;
    puts("Deseja Converter para:\n"
                 "1 - Ano\n"
                 "2 - Mes\n"
                 "3 - Semana\n"
                 "4 - Dia\n"
                 "5 - Minuto\n"
                 "6 - Segundo");

    scanf("%i", &op);
    float doze;
    puts("Insira Quantas Horas");
    scanf("%f", &doze);
    temp[4] = doze;
    tudoSegundo(temp);
    if (op == 1) {
        converte(temp,0,sAno);
        printf("Sao %.0f Anos\n", temp[0]);
    } else if (op == 2) {
        converte(temp,1,sMes);
        printf("Sao %.0f Meses\n", temp[1]);
    } else if (op == 3) {
        converte(temp,2,sSem);
        printf("Sao %.0f Semana\n", temp[2]);
    } else if (op == 4) {
        converte(temp,3,sDia);
        printf("Sao %.0f Dias\n", temp[3]);
    } else if (op == 5) {
        converte(temp,5,sMin);
        printf("Sao %.0f Minutos\n", temp[5]);
    } else if (op == 6) {
        printf("Sao %.0f Segundos\n", temp[6]);
    }
}

void converteMinuto(float* temp) {
    int op;
    puts("Deseja Converter para:\n"
                 "1 - Ano\n"
                 "2 - Mes\n"
                 "3 - Semana\n"
                 "4 - Dia\n"
                 "5 - Horas\n"
                 "6 - Segundo");

    scanf("%i", &op);
    float doze;
    puts("Insira Quantos Minutos");
    scanf("%f", &doze);
    temp[5] = doze;
    tudoSegundo(temp);

    if (op == 1) {
        converte(temp,0,sAno);
        printf("Sao %.0f Anos\n", temp[0]);
    } else if (op == 2) {
        converte(temp,1,sMes);
        printf("Sao %.0f Meses\n", temp[1]);
    } else if (op == 3) {
        converte(temp,2,sSem);
        printf("Sao %.0f Semana\n", temp[2]);
    } else if (op == 4) {
        converte(temp,3,sDia);
        printf("Sao %.0f Dias\n", temp[3]);
    } else if (op == 5) {
        converte(temp,4,sHor);
        printf("Sao %.0f Horas\n", temp[4]);
    } else if (op == 6) {
        printf("Sao %.0f Segundos\n", temp[6]);
    }
}

void inteligente(float* temp){
    puts("Insira as Anos");
    scanf("%f", &temp[0]);
    puts("Insira os Meses");
    scanf("%f", &temp[1]);
    puts("Insira as Semanas");
    scanf("%f", &temp[2]);
    puts("Insira os Dias");
    scanf("%f", &temp[3]);
    puts("Insira as Horas");
    scanf("%f", &temp[4]);
    puts("Insira os Minutos");
    scanf("%f", &temp[5]);
    puts("Insira os Segundos");
    scanf("%f", &temp[6]);
    temp[7] = 0;
    tudoSegundo(temp);
    temp[0] = Generico(&temp[6],sAno);
    temp[1] = Generico(&temp[6],sMes);
    temp[2] = Generico(&temp[6],sSem);
    temp[3] = Generico(&temp[6],sDia);
    temp[4] = Generico(&temp[6],sHor);
    temp[5] = Generico(&temp[6],sMin);

    Revisao(60,&temp[5],&temp[6]);
    Revisao(60,&temp[4],&temp[5]);
    Revisao(24,&temp[3],&temp[4]);
    Revisao(7,&temp[2],&temp[3]);
    Revisao(4,&temp[1],&temp[2]);
    Revisao(12,&temp[0],&temp[1]);
    imprime(temp);
}

int main(int argc, char *argv[]) {
    int o;
    float temp[8];
    puts("==========MENU===========\n"
                 "Insira a Opcao Desejada\n"
                 "1 - Converter Ano\n"
                 "2 - Converter Mes\n"
                 "3 - Converter Semana\n"
                 "4 - Converter Dia\n"
                 "5 - Converter Horas\n"
                 "6 - Converter Minutos\n"
                 "7 - Conversão Inteligente");
    scanf("%i", &o);
    if (o == 1) {
        converteAno(temp);
    } else if (o == 2) {
        converteMes(temp);
    } else if (o == 3) {
        converteSemana(temp);
    } else if (o == 4) {
        converteDia(temp);
    } else if (o == 5) {
        converteHora(temp);
    } else if (o == 6) {
        converteMinuto(temp);
    } else if (o == 7) {
        inteligente(temp);
    } else {
        puts("Opção Não Aceita");
    }
    return 0;
}