#include <stdio.h>

int main (){

int numerodenotas, valoremreais;


scanf ("%d", &valoremreais);
printf ("%d\n", valoremreais);

//valor em reais 576


numerodenotas = valoremreais / 100;  //numero de notas = 5 / divisao
valoremreais = valoremreais % 100;   // valor em reais = 76 % resto
printf ("%d Nota(s) de R$100,00 \n", numerodenotas);

numerodenotas = valoremreais / 50;  //numero de notas = 1
valoremreais = valoremreais % 50;   // valor em reais = 26
printf ("%d Nota(s) de R$50,00 \n", numerodenotas);

numerodenotas = valoremreais / 20;  //numero de notas = 1
valoremreais = valoremreais % 20;   // valor em reais = 6
printf ("%d Nota(s) de R$20,00 \n", numerodenotas);

numerodenotas = valoremreais / 10;
valoremreais = valoremreais % 10; 
printf ("%d Nota(s) de R$10,00 \n", numerodenotas);

numerodenotas = valoremreais / 5;
valoremreais = valoremreais % 5; 
printf ("%d Nota(s) de R$5,00 \n", numerodenotas);

numerodenotas = valoremreais / 2;
valoremreais = valoremreais % 2; 
printf ("%d Nota(s) de R$2,00 \n", numerodenotas);

numerodenotas = valoremreais / 1;
valoremreais = valoremreais % 1; 
printf ("%d Nota(s) de R$1,00 \n", numerodenotas);


}