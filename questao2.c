#include <stdio.h>

int main() {
    int a, b;

   
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);

   
    int *ptr_a = &a;
    int *ptr_b = &b;

   
    if (ptr_a > ptr_b) {
        printf("O conteúdo do maior endereço é: %d\n", *ptr_a);
    } else {
        printf("O conteúdo do maior endereço é: %d\n", *ptr_b);
    }

    return 0;
}
