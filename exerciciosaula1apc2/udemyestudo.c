#include <stdio.h>
void incrementa(int valor){
printf("Antes de incrementar.\n");
printf("O contador vale %d\n",valor);
  
  printf("Depois de incrementar.\n");
  printf("O contador vale %d\n",++valor);
}
int main(void) {
  int contador = 10;

  printf("Antes de incrementar.\n");
  printf("O contador vale %d\n", contador);

  incrementa (contador);
  printf("Depois de incrementar.\n");
  printf("O contador vale %d\n", contador);
  
  
  
  return 0;
}
