#include <stdio.h>
int main(){
    char nome[30];
    int idade;
    printf("Informe seu nome: ");
    scanf("%s", nome);
    printf("Informe sua idade: ");
    scanf("%d", &idade);

    printf("Seu nome é %s e sua idade é %d\n", nome, idade);
}
