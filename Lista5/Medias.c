#include <stdio.h>

int main(){

    float Notas[4], somaNotas = 0, somaPesos = 0;
    float Pesos[4] = {2, 3, 4, 1};

        for(int i = 0; i < 4; i++){
            scanf("%f", &Notas[i]);
        }
        for(int i = 0; i < 4; i++ ){
            somaNotas += Notas[i] * Pesos[i];
            somaPesos += Pesos[i];
        }
    float mediaInicial = somaNotas/somaPesos;
    printf("Media: %.1f\n", mediaInicial);

    if(mediaInicial >= 7){
        printf("Aluno aprovado.\n");
    }else if(mediaInicial < 5){
        printf("Aluno reprovado.\n");
    }else{
        printf("Aluno em exame.\n");
        float notaExame;
        scanf ("%f", &notaExame);
        printf("Nota do exame: %.1f\n", notaExame);
        float mediaFinal = (notaExame + mediaInicial) / 2 ;

        if (mediaFinal >= 5){
            printf("Aluno aprovado.\n");
        }else{
            printf("Aluno reprovado.");
        }
    
    
    
    }








    return 0;
}