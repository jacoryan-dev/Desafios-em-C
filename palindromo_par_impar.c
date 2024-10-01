#include <stdio.h>

int main(){
    int n, resto, original;
    int reverso = 0;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    
    original = n;

    while (n != 0){
         resto = n % 10;
         reverso = reverso * 10 + resto;
         n = n / 10;
    }
    
    if (original == reverso){
         if(original % 2 == 0){
             printf("%d é Palíndromo e é par.");
    }    else {
             printf("é Palíndromo e é impar.");
    }
             
    }else {
        printf("não é Palímdromo");
    }
         
    
    return 0;
}