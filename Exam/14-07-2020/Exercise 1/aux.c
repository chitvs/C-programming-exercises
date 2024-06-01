#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include "aux.h"

void mat_free(Mat *m){
  free(*m->mat);
  free(m->mat);
  free(m);
}

void mat_print(const Mat *m){
  if (m == NULL){
    printf("NULL");
    return;}
  for (int r = 0; r < m->rows; ++r){
    for (int c = 0; c < m->cols; ++c){
      printf("%1.f, ", m->row_ptrs[r][c]);}
  printf("\n");}
}

Mat *mat_alloc(int rows, int cols){
  Mat *m = (Mat *)malloc(sizeof(Mat));
  m->cols = cols;
  m->rows = rows;
  m->row_ptrs = (double **)malloc(sizeof(double *) * rows);
  double *row_p = (double *)malloc(sizeof(double) * rows * cols);
  for (int i = 0; i < rows; ++i){
    m->row_ptrs[i] = row_p;
    row_p += cols;}
  return m;
}
