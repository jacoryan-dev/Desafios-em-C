#include <stdio.h>
int main () {
    int codigo;
    int conta;
    int pago;
    int troco;
    int falta;
    printf("Digite o código do lanche:");
    scanf("%d", &codigo);
    printf("Digite o valor pago pelo cliente:");
    scanf("%d", &pago);

    if(codigo == 1) {
        conta = 12;
   }else if (codigo == 2){
        conta = 23;
   }else if(codigo == 3) {
        conta = 31;
   }else if (codigo == 4) {
        conta = 28;
   }else if (codigo == 5){
        conta = 15;
   }else {
    printf("Código inválido! Digite um número de 1 a 5.");
   }    
   if(pago == conta){
        printf ("Deu certin!");
  }else if (pago > conta ){
        troco = pago - conta;
        printf("Troco =%d", troco);
  }else if (pago < conta){
        falta = conta - pago;
        printf("Saldo insuficiente!Falta %d\n", falta);

  }

    return 0; 
}