#include <stdio.h>

int main(){

float area, base, alt;

printf("Informe a base do triângulo: ");
scanf("%f", &base);
printf("Informe a altura do triângulo: ");
scanf("%f", &alt);

area = (base * alt)/2;

printf("A area do triângulo é %.2f\n", area);

}