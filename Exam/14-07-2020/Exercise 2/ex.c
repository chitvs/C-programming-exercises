#include "aux.h"

int length(TipoSCL lis){
  if (lis == NULL)
    return 0;
  else
    return 1 + length(lis->next);
}

int sommaElementi(TipoSCL lis, int i, int j){
  if (lis==NULL || i>length(lis) || j>length(lis))
    return -1;
  else{
    if (i==0 && j==0)
      return lis->info * 2;
    else{
      if (i==0)
        return lis->info + sommaElementi(lis->next,i-1,j-1);
      else if (j==0){
        return lis->info;}
      else
        return sommaElementi(lis->next,i-1,j-1);}}
}

void sommatoriaDispariR(TipoSCL lis, TipoSCL ris,int sum, int i){
  if (lis==NULL)
    return;
  else{
    if (i%2!=0){
      ris->info = lis->info + sum;
      sum = ris->info;
      sommatoriaDispariR(lis->next,ris->next,sum,i+1);}
    else{
      ris->info = lis->info;
      sommatoriaDispariR(lis->next,ris->next,sum,i+1);}}
}

void sommatoriaDispari(TipoSCL lis, TipoSCL ris){
  sommatoriaDispariR(lis,ris,0,0);
}
