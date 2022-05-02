/*Fa ̧ca um programa em C que leia duas strings do usu ́ario e informe se elas s ̃ao iguais. Fa ̧ca uma
vers ̃ao com o uso da fun ̧c ̃ao strcmp() e outra sem.*/

#include <stdio.h>
#include <string.h>
#define TAM 20

int main(){
    // COM strcmp()
    puts("Com a funcao strcmp()");

    char str1[TAM], str2[TAM];
    int resultado, aux = 0;

    printf("Digite uma palavra: ");
    scanf("%s", &str1);
    printf("Digite outra palavra: ");
    scanf("%s", &str2);

    resultado = strcmp(str1, str2);

    if(resultado == 0){
        printf("As palavras sao iguais\n");
    }else{
        printf("As palavras nao sao iguais\n");
    }
    // SEM strcmp()

    puts("Sem a funcao strcmp()");

    printf("Digite uma palavra: ");
    scanf("%s", &str1);
    printf("Digite outra palavra: ");
    scanf("%s", &str2);

    for(int i = 0; str1[i] != '\0'; i++){
        for(int j = 0; str2[j] != '\0'; j++){
            if(str1[i] != str2[j]){
                aux += 1;
                break;
            } 
        }    
    }
    
    if(aux == 0){
        printf("As palavras sao iguais");
    }else{
        printf("As palavras nao sao iguais");
    }
    return 0;
}