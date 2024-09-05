#include <stdio.h>

int main() {
    int a, b, c, d, e, f, g, h;
    int P, R, Q;

    printf("Digite os 8 dígitos do RG, em ordem: ");
    printf("Digite o primeiro: ");
    scanf("%d", &a);
    printf("Digite o segundo: ");
    scanf("%d", &b);
    printf("Digite o terceiro: ");
    scanf("%d", &c);
    printf("Digite o quarto: ");
    scanf("%d", &d);
    printf("Digite o quinto: ");
    scanf("%d", &e);
    printf("Digite o sexto: ");
    scanf("%d", &f);
    printf("Digite o setimo: ");
    scanf("%d", &g);
    printf("Digite o oitavo: ");
    scanf("%d", &h);


    P = 2 * a + 3 * b + 4 * c + 5 * d + 6 * e + 7 * f + 8 * g + 9 * h;


    R = P % 11;

    Q = 11 - R;


    if (Q >= 0 && Q <= 9) {
        printf("O dígito verificador é: %d\n", Q);
    } else {
        printf("O dígito verificador é: X\n");
    }

    return 0;
}
