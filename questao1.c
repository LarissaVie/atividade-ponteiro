#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;

  
    int *ptr_a = &a;
    int *ptr_b = &b;

    
    if (ptr_a > ptr_b) {
        printf("O maior endereço é: %p\n", (void*)ptr_a);
    } else {
        printf("O maior endereço é: %p\n", (void*)ptr_b);
    }

    return 0;
}
