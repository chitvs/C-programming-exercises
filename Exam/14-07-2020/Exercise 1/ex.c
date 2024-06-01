#include "aux.h"

void applicaFiltro(Mat *src, Mat * filtro, int riga, int colonna){
  for (int i=riga;i<filtro->rows+riga;i++){
    for (int j=colonna;j<filtro->cols+colonna;j++){
      if (i<src->rows && j<src->cols)
        src->row_ptrs[i][j] *= filtro->row_ptrs[i-riga][j-colonna];}}
}
