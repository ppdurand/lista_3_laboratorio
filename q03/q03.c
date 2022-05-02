/*Fa ̧ca um programa em C que leia uma string do usu ́ario e informe a quantidade de caracteres da
string fornecida. N ̃ao use a fun ̧c ̃ao strlen().*/

#include <stdio.h>
#define TAM 20

int main(){
    int quantidade = 0;
    char string[TAM];

    printf("Digite uma palavra: ");
    scanf("%s", &string);

    for(int i = 0; string[i] != '\0'; i++){
        quantidade++;
    }

    printf("A string tem %d caractere", quantidade);
}