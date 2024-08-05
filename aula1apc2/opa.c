#include <stdio.h>
int main(void){
  short int numero = 0x7FFF;
  printf("numero: %d (%X)\n",numero,numero);
numero++;
   printf("numero: %d (%X)\n",numero,numero);
  numero++;

  return 0;
}
