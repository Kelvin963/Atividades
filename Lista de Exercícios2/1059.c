#include<stdio.h>

int main(){

int i;


for(i = 1;i <= 100; i++){            // % = resto
    if(i%2 ==0){                     // resto de i == 0, especificado no código
        printf ("%d\n", i);          // então ele vai imprimir apenas os que costa resto == 0  

    }

}


return 0;
}