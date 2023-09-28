#include <stdio.h>

int main(){

int a;
int b;
int c;
//int maior;


printf ("Insira tres numeros para saber o maior: \n");
scanf("%d %d %d", &a, &b, &c);

if(a > b && a > c){

    printf("%d eh o maior", a);

}else if(b > a && b > c){
    printf("%d eh o maior", b);


}else if(c > b && c > a){
    printf("%d eh o maior", c);

}






}

/*scanf ("%d %d %d", &a, &b, &c); //pro scanf, espaço ou enter ("\n") é a mesma coisa

maior = (a + b + abs(a - b))/2;  //maior entre a e b
maior = (maior + c + abs (maior - c))/2;

printf("%d eh o maior", maior);



*/





