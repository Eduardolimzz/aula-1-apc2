#include <stdio.h>
int main() {


 int n1 = 3, n2 = 5;
 int *ptr, *ptr2;


 ptr = &n1;
 ptr2 = &n2;


 int troca = *ptr;
 *ptr = *ptr2;
 *ptr2 = troca;
 printf("n1: %d, n2: %d\n", n1, n2);


  return 0;
}
