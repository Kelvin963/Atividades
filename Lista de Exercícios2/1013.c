#include <stdio.h>

int main () {

int valor1;
int valor2;
int valor3;

printf("Digite o primeiro valor:");
scanf("%d", &valor1);

printf("Digite o segundo valor:");
scanf("%d", &valor2);

printf("Digite o terceiro valor:");
scanf("%d", &valor3);


if(valor1 > valor2 && valor1 > valor3){
    printf("%d eh maior", valor1);

}else if(valor2 > valor1 && valor2 > valor3){
    printf("%d eh maior", valor2);

}else if( valor3 > valor1 && valor3 > valor2){
    printf("%d eh maior", valor3);

}




return 0;
}