#include <stdio.h>

int main(){
int num;
printf("Informe um valor: ");
scanf("%d", &num);

if( num % 2 == 0){
    printf("Este numero é par\n");
} else {
     printf("Este numero é impar\n");
}

}