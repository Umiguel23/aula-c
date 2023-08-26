#include <stdio.h>
int main(){
int num ;

printf("Digite um valor: ");
scanf("%d", &num);

if(num > 0){
    printf("Este valor é positivo\n");
} else if(num < 0){
    printf("Este valor é negativo\n");
}else{
    printf("Este valor é zero\n");
}

}