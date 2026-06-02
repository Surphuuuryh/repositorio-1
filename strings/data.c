#include <stdio.h>
#include <string.h>

typedef struct data{
    int dia, mes, ano;
    
} data;

int main(){

data data;

printf("informe o dia: ");
scanf("%d", &data.dia);
printf("informe o mes: ");
scanf("%d", &data.mes);
printf("informe o ano: ");
scanf("%d", &data.ano);
printf("a data é: %d/%d/%d ", data.dia, data.mes, data.ano);








    return 0;
}