/*Fa ̧ca um programa em C que leia um vetor do tipo float com 15 elementos e apresente a soma do
menor e maior elemento do vetor fornecido.*/
#include <stdio.h>
#define TAM 15

int main(){
    float vetor[TAM], menor, maior;

    for(int i = 0; i < TAM; i++){
        printf("Elemento %d: ", i + 1);
        scanf("%f", &vetor[i]);
        if(i == 0){
            menor = vetor[i];
            maior = vetor[i];
        }
        if(vetor[i] > maior){
            maior = vetor[i];
        }
        if(vetor[i] < menor){
            menor = vetor[i];
        }
    }
    printf("Maior valor: %0.2f\nMenor Valor: %0.2f", maior, menor);
    
}