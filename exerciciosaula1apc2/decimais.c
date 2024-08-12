#include <stdio.h>

int main(void) {

  int n = 1025;
  char *pchar = (char*)&n;
  printf("byte 0: %d, byte 1: %d, byte 2: %d, byte 3 : %d", *pchar, *(pchar+1), *(pchar+2), *(pchar+3));
  printf("n: %d\n", n);
  


  
 
  return 0;
}
