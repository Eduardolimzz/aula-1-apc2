#include <stdio.h>

int main() {
    char str[] = "Exercicio de APC II";
    char *ptr = str;
    char *ultima_ocorrencia = NULL; 
    char entrada;

    printf("Digite um caractere: ");
    scanf("%c", &entrada);

    while (*ptr != '\0') { 
        if (*ptr == entrada) {
            ultima_ocorrencia = ptr;
        }
        ptr++;
    }

    if (ultima_ocorrencia != NULL) {
        printf("Saida: 0x%x\n", (unsigned int)(ultima_ocorrencia - str + 0x100));
    } else {
        printf("Caractere não encontrado\n");
    }

    return 0;
}