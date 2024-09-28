#include <stdio.h>
int main() {
    float temp, cel, fah, kel;
    char escala;
    printf("Informe a temperatura e a escala (C, K, F): ");
    scanf("%f %c", &temp, &escala);

    
    if (escala == 'C'||escala == 'c') {
        cel = temp;
        fah = cel * 1.8 + 32;
        kel = cel + 273.15;

        printf("Celsius: %.2f\n", cel);
        printf("Farenheit: %.2f\n", fah);
        printf("Kelvin: %.2f\n", kel);
        }else if (escala == 'F' || escala == 'f') {
        fah = temp;
        cel = (fah- 32) / 1.8;
        kel = cel + 273.15;

        printf("Celsius: %.2f\n", cel);
        printf("Farenheit: %.2f\n", fah);
        printf("Kelvin: %.2f\n", kel);
    } else if (escala == 'K' || escala == 'k') {
        kel = temp;
        cel = kel - 273.15;
        fah = cel * 1.8 + 32;

        printf("Celsius: %.2f\n", cel);
        printf("Farenheit: %.2f\n", fah);
        printf("Kelvin: %.2f\n", kel);
    } else {
        printf("Escala inválida.\n");
    }
    
    return 0;
}