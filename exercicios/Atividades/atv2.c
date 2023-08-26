#include <stdio.h>

int main(){
    int cel;
    float far;

    printf("Informe um valor em Celsius para a conversão em Fahrenheit: ");
    scanf("%d", &cel);
    far = (cel * 1.8) + 32;

    
    printf("Correspondente em Fahrenheit = %.2f\n", far);
}