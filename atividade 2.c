#include <stdio.h>

int main(){
float area, base, altura;
printf("informe a base do triangulo: ");
scanf("%f", &base);
printf("informe a altura do triangulo: ");
scanf("%f", &altura);

area = (base * altura) / 2;

printf("a area do triangulo é de %.2f", area);



    return 0;
}