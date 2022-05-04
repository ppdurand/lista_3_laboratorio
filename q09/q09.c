/*Fa ̧ca um programa que leia uma matriz bidimensional do usu ́ario, de dimens ̃ao 3x3, e apresente os
elementos da diagonal principal.*/

#include <stdio.h>
#define TAM 3

int main(){
    int matriz[TAM][TAM], i, j;

    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++){
            printf("Informe o inteiro da linha %d, coluna %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
    puts("");
    puts("MATRIZ:\n");
    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++){
            printf("%d ", matriz[i][j]);
        }
        puts("\n");
    }
    puts("Elementos da diagonal principal:");
    printf("%d, %d, %d", matriz[0][0], matriz[1][1], matriz[2][2]);
    return 0;
}



