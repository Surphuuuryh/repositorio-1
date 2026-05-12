#include <stdio.h>

int main(){
    float area, raio;
    float pi = 3.14159;
    printf("digite o raio da circunferência: ");
    scanf("%f", &raio);
    area = pi * (raio * raio);
    printf ("a area da circunfêrencia é de %.2f\n", area);
return 0;
}