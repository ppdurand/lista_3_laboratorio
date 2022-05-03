/*Fa ̧ca um programa em C que leia uma string do usu ́ario e a apresente na forma inversa.*/

#include <stdio.h>
#include <string.h>
#define TAM 20

int main(){
    char str[TAM];
    
    printf("Digite a string: ");
    scanf("%s", &str);

    for(int i = 0; i <= TAM; i++){
        str[i] = str[TAM - i];
    }

    printf("String inversa: %s", str);

    return 0;
}