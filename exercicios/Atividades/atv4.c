#include <stdio.h>
int main(){
int num, qua, cub;

printf("Informe um numero inteiro: ");
scanf("%d", &num);
qua = num * num;
cub = qua * num;

printf("O quadrado desse valor é: %d\n O cubo desse valor é: %d\n", qua, cub);

}