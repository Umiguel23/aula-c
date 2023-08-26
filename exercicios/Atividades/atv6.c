#include <stdio.h>

int main(){
int ano;
printf("Informe um ano: ");
scanf("%d", &ano);

if(ano % 4 == 0){
    printf("Este ano é bissexto\n");
} else {
    printf("Este ano não é bissexto\n");
}

}
