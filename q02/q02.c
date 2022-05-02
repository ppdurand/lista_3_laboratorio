/*Fa ̧ca um programa em C que leia uma string e um caractere do usu ́ario e informe se a string de
entrada cont ́em o caracter fornecido.*/

#include <stdio.h>
#define TAM 20

int main(){
    int char_in_str = 0;
    char caractere, string[TAM];

    printf("Caractere: ");
    scanf("%c", &caractere);
    printf("String: ");
    scanf("%s", &string);

    for(int i = 0; i < TAM; i++){
        if(string[i] == caractere){
            char_in_str += 1;
        }
    }
    if(char_in_str > 0){
        printf("%c esta em %s", caractere, string);
    }else{
        printf("%c nao esta em %s", caractere, string);
    }

}