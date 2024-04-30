#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ale(int FMAX, int FTAM, int fvet[FTAM]){
  int x;
  for(x = 0; x < FTAM; x++){
    fvet[x] = rand() % FMAX;
  }
}

int convint(char f_x){
  int f_conv;
  f_conv = (int) f_x;
  return f_x;
}

char convchar(int f_x){
  char f_conv;
  f_conv = (char) f_x;
  return f_x;
}

void numordem(int FTAM, int vet[FTAM]){
  int fx, faux;
  for(fx = 0; fx < FTAM - 1; fx++){
    if(vet[fx] > vet[fx + 1]){
      faux = vet[fx + 1];
      vet[fx + 1] = vet[fx];
      vet[fx] = faux;
      fx = -1;
    }
  }
}

void printnum(int FTAM, int vet[FTAM]){
  int fx;
  for(fx = 0; fx < FTAM; fx++){
    if(fx == FTAM - 1){
      printf("%i\n", vet[fx]);
    }
    else{
      printf("%i - ", vet[fx]);
    }
  }
}