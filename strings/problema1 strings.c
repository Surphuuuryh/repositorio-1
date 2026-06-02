#include <stdio.h>
#include <string.h>

typedef struct Aluno{
    char nome[50];
    int idade;
    char curso[50];
} Aluno;

int main(){

int idade;
char curso[50];
char nome[50];

Aluno a[50];

    for (int i = 0; i < 5; i++){
printf("informe sua idade: ");
scanf("%d", &a[i].idade);
getchar();

printf("informe seu nome completo: ");
fgets(a[i].nome, 50, stdin);
a[i].nome [strcspn(a[i].nome, "\n")] = '\0';

printf("informe o curso: ");
fgets(a[i].curso, 50, stdin);
a[i].curso [strcspn(a[i].curso, "\n")] = '\0';
}
for (int i = 0; i < 5; i++) {
    printf("seu nome é: %s e o curso foi de %s", a[i].nome, a[i].curso);
}
return 0;

}
