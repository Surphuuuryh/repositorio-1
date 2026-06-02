#include <stdio.h>
int main(){

char nome[50];
printf("informe seu nome completo: ");
fgets(nome, 50, stdin);


printf("seu nome é: %s", nome);

return 0;



}