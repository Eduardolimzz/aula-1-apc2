#include <stdio.h>

int main() {
    int num[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    int (*p)[4] = num; 
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
         
            if (p[i][j] % 2 == 0) {
                p[i][j] = 0; 
            }
        }
    }

    printf("Matriz resultante:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }

    return 0;
}
