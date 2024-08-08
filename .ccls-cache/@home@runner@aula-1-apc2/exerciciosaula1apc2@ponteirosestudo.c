#include <stdio.h>

int main(void) {

  int var = 15;
  int *ptr;

  ptr = &var;

  printf("conteudo de var = %d\n", var);
  printf("endereço de var = %p\n", &var);
  printf("conteudo apontado por ptr = %d\n", *ptr);
  printf("endereço apontado por ptr = %p\n", ptr);
  printf("endereco do ptr = %p\n", &ptr);

  *ptr = 73;
  printf("\n\n");
  printf("conteudo de var = %d\n", var);
  printf("endereço de var = %p\n", &var);
  printf("conteudo apontado por ptr = %d\n", *ptr);
  printf("endereço apontado por ptr = %p\n", ptr);
  printf("endereco do ptr = %p\n", &ptr);


  printf("\n\nEnd.");
  while(1);
  return 0;
}
//Ponteiros:
// *ptr : o apontado por, conteudo do enderaço da variavel que ptr aponta
// ptr : o endereço da variavel
// &ptr : o endereço do ponteiro