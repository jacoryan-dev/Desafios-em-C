#include <stdio.h>

int main() {
    int x1, y1, x2, y2; 
    int x, y;         

    printf("Digite as coordenadas do retângulo (x1 y1 x2 y2): ");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    printf("Digite as coordenadas do ponto (px py): ");
    scanf("%d %d", &x, &y);

    if (x >= x1 && x <= x2 && y >= y1 && y <= y2) {
        printf("Dentro!\n");
    } else {
        printf("Fora!\n");
    }

    return 0;
}
