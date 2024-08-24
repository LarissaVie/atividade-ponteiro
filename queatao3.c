#include <stdio.h>

int main() {
    float array[10];

    
    for (int i = 0; i < 10; i++) {
        array[i] = i * 1.1f; 
    }

   
    for (int i = 0; i < 10; i++) {
        printf("Endereço da posição %d: %p\n", i, (void*)&array[i]);
    }

    return 0;
}

