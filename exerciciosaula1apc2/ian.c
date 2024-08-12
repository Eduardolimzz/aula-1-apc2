#include <stdio.h>

int main(void) {
    int i = 7;
    int *p;
    p = &i;

  
    printf("&p: %p\n",&p);

    // Imprime o valor de p (que é o endereço de i)
    printf("p (&i endereço de i): %p\n",p);

    // Lê um novo valor para i através do ponteiro p
    scanf("%d", p);

    // Imprime o valor de i, que foi modificado pelo scanf
    printf("p (*p - valor de i): %d\n", *p);

    return 0;
}
