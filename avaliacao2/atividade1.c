#include <stdio.h>

int main() {
    int vet[8] = {4, 6, 3, 8, 2, 5, 9, 1};
    int i;
    for(i = 0; i < 8; i++) {
        printf("vet[%d]: %d\n", i, vet[i]);
    }
    return 0;
}