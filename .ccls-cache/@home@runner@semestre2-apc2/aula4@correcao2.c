#include <stdio.h>

struct Pessoa {
  char nome[100];      // 100 bytes
  int idade;           //   4 bytes
  char genero; // M, F //   1 byte
};

int main(void) {
  struct Pessoa pessoa1 = {"João", 30, 'M'};
  //struct Pessoa pessoa1 = {.nome = "João", .idade = 30, .genero = 'M'};


  printf("Nome: %s\n", pessoa1.nome);
  printf("Idade: %d\n", pessoa1.idade);
  printf("Gênero: %c\n", pessoa1.genero);

  struct Pessoa pessoa2;
  // Obtenha do console o nome, a idade e o gênero da pessoa 2.

  sscanf("Pau concreto\n", "%99[^\n]", pessoa2.nome);
  sscanf("33" , "%d", &pessoa2.idade);
  sscanf("M", "%c", &pessoa2.genero);
  // Em seguida exiba esses dados de volta pro console.
  printf("Nome: %s\n", pessoa2.nome);
  printf("Idade: %d\n", pessoa2.idade);
  printf("Genero: %c\n", pessoa2.genero);

  return 0;
}