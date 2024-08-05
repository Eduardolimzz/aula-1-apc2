#include <stdio.h>

int main(void) {
  short int numero = 0;
  printf("tamanho em bytes de numero: %ld\n",sizeof(numero));
  printf("tamanho em bytes de numero: %ld\n",sizeof(int));
  printf("tamanho em bytes de numero: %ld\n",sizeof(short int));
  printf("tamanho em bytes de numero: %ld\n",sizeof(long int));
  
  return 0;
}