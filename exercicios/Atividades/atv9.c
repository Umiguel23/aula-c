#include <stdio.h>
int main(){

int num, contador, mult;
printf("Digite um valor: ");
scanf("%d", &num);

contador = 1;
while(contador < 11){
    mult = num * contador;
    printf("%d X %d = %d\n", num, contador, mult);
    contador++;
}

}