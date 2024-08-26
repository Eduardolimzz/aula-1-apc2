#include <stdio.h>

int main() {
    char str[] = "Exercicio de APC II"; 
    char *ptr = str; 
    char *fim_ptr;  

   
    while (*ptr != '\0') {
        ptr++; 
    }

    fim_ptr = ptr; 
    int num_caracteres = fim_ptr - str; 

   
    printf("Número de caracteres na string: %d\n", num_caracteres);

    return 0;
}
