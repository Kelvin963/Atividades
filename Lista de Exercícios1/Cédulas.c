#include <stdio.h>

int main (){

int numerodenotas, valoremreais;

scanf ("%d", &valoremreais);

numerodenotas = valoremreais / 100;
valoremreais = valoremreais % 100;
printf ("%d Nota(s) de R$ 100,00 \n", numerodenotas);

numerodenotas = valoremreais / 50;
valoremreais = valoremreais % 50;
printf ("%d Nota(s) de R$ 50,00 \n", numerodenotas);

numerodenotas = valoremreais / 20;
valoremreais = valoremreais % 20;
printf ("%d Nota(s) de R$ 20,00 \n", numerodenotas);

numerodenotas = valoremreais / 10;
valoremreais = valoremreais % 10; 
printf ("%d Nota(s) de R$ 10,00 \n", numerodenotas);

numerodenotas = valoremreais / 5;
valoremreais = valoremreais % 5; 
printf ("%d Nota(s) de R$ 5,00 \n", numerodenotas);

numerodenotas = valoremreais / 2;
valoremreais = valoremreais % 2; 
printf ("%d Nota(s) de R$ 2,00 \n", numerodenotas);

numerodenotas = valoremreais / 1;
valoremreais = valoremreais % 1; 
printf ("%d Nota(s) de R$ 1,00 \n", numerodenotas);

return 0;
}