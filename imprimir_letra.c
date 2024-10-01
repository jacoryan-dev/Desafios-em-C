#include <stdio.h>

int main(){
    int linhas;
    char letra;
    int i, j = 0;

    printf("Insira o número de linhas e uma letra: ");
    scanf("%d %c", &linhas, &letra);

    for(i = 0; i < linhas - 1; i++){
        for (j = 0; j < linhas - 1 ; j++){
            if (i == j || i + j == (linhas -2)){
                printf("%c", letra);

            }else{
                printf(" ");

            }
            
        }
        printf("\n");
    }
    
    return 0;
}