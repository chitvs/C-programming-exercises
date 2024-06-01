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
Mat *randomMat( int rows, int cols, int max );
Mat *uniformMat( int rows, int cols, int val );
#endif

typedef struct {
	int row;
	int col;
	int len;
	char dir;
} Nave;

Nave *creaNave(int row, int col, int len, char dir);

void bombardamentoNavale(Mat *src, int r, int c);
void printNv(Nave * nv);
bool compareMatrix(Mat *m1, Mat *m2);
