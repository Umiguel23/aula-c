#include <stdio.h>

int main(){
    int bovFin, quantAno = 0, bovs = 10;

    printf("Informe a quantidade de bovinos final: ");
    scanf("%d", &bovFin);

    while(bovs < bovFin){
        quantAno++;
        bovs = bovs +(bovs / 3) - (bovs / 4);
    }
    printf("A quantidade de anos necessários para alcançar %d bovinos é: %d\n", bovFin, quantAno);


}