/*Fa ̧ca um programa em C que concatene duas strings recebidas pelo usu ́ario. Construa uma vers ̃ao
com uso da funcao strcat() e outra sem.*/

#include <stdio.h>
#include <string.h>
#define TAM 30

int main(){
	char string1[TAM], string2[TAM], string3[TAM];
	
    puts("COM stracat(): ");
    printf("Primeira String: ");
    scanf("%s", &string1);
    printf("Segunda String: ");
    scanf("%s", &string2);
	
    strcat(string1, string2);

	printf("String nova: %s\n", string1);	

    puts("SEM strcat(): ");

    unsigned int k = 0;
    unsigned j = 0;
    while(string2[j] != '\0'){
        string1[k+j] = string2[j];
        j++;
    }
    string1[k+j] = '\0';


    printf("String nova: %s", string1);
}
