#include <stdio.h>

struct Pessoa{
char nome [100];       //100 bytes
  int idade;           //4 bytes
  char genero;         //M, F // 1 byte
  char byte1, byte2; //2 bytes
  char byte3, byte4; //2 byte
  

};
int main(void){
  printf("sizeof(struct Pessoa): %d\n", (int)sizeof(struct Pessoa));

  return 0;
}