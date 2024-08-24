#include <stdio.h>

int main() {
    int array[5];
    int *ptr = array; 

    
    for (int i = 0; i < 5; i++) {
        printf("Digite o valor para o elemento %d: ", i);
        scanf("%d", (ptr + i));
    }

   
    printf("\nDobro dos valores lidos:\n");
    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: %d\n", i, 2 * *(ptr + i)); 
    }

    return 0;
}
