#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "meu.h"
#define TAM 10
#define MAX 101
main(){
  int x, vet[TAM], aux;
  ale(MAX, TAM, vet);
  printf("Números gerados: \n");
  printnum(TAM, vet);
  numordem(TAM, vet);
  printf("\nNúmeros em ordem: \n");
  printnum(TAM, vet);
  getchar();
}