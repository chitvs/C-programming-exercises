#pragma once
#include <stdio.h>
#include <stdlib.h>

#ifndef MAT_H
#define MAT_H

typedef int TipoInfoMat;

typedef struct {
  int rows;
  int cols;
  TipoInfoMat **row_ptrs;
} Mat;

Mat *allocMatrix(int rows, int cols);
void printMatrix(Mat* src);
void freeMatrix(Mat* src);
Mat* randomMat(int rows, int cols, int max);
int matEqual(Mat * m1, Mat * m2);
Mat * copyMat(Mat *m);
#endif

void applicaFiltro(Mat * src, Mat * filtro, int riga, int colonna);
