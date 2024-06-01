#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include "aux.h"

float aux(Mat *m,int j){
  float somma = 0;
  for (int i =0;i<m->rows;i++){
    somma += m->mat[i][j];}
  return somma/(m->rows);
}

int* controlla_colonne(Mat *m, double w, double v){
  int* ris = (int*)malloc(sizeof(int)*(m->cols));
  for (int i = 0;i<m->cols;i++){
    if (aux(m,i) <= v && aux(m,i) >= w) 
      ris[i] = 1;
    else
      ris[i] = 0;}
  return ris;
}
