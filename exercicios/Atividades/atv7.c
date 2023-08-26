#include <stdio.h>
int main(){
int nota;
printf("Informe sua nota: ");
scanf("%d", &nota);

if(nota >= 6){
    printf("Você foi aprovado\n");
} else{
    printf("Você foi reprovado\n");
}

}