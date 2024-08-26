#include <stdio.h>

int main() {
    char str[] = "Exercicio de APC II"; // Definindo a string
    char *p = str; // Ponteiro que aponta para o início da string
    char caractere; // Caractere a ser procurado
    int encontrado = 0; // Flag para verificar se o caractere foi encontrado

    // Pedindo ao usuário para inserir um caractere
    printf("Informe um caractere: ");
    scanf(" %c", &caractere);  // O espaço antes de %c é para capturar qualquer caractere em branco
    scanf("%c", &caractere);  // O espaço antes de %c é para capturar qualquer caractere em branco

    // Laço para verificar cada caractere na string
    for (int i = 0; i < sizeof(str) - 1; i++) { // Menos 1 para não contar o terminador nulo
        if (*(p + i) == caractere) { // Acessando caractere com ponteiro
            printf("Caractere encontrado na posição: %d\n", i); // Imprimindo posição em decimal
            encontrado = 1; // Marcando que o caractere foi encontrado
            break; // Saindo do laço após encontrar
        }
    }

    // Se não encontrou o caractere
    if (!encontrado) {
        printf("Caractere não encontrado.\n");
    }

    return 0;
}
