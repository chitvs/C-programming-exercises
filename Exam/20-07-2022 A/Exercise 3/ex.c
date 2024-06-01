#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "aux.h"

int summax(TipoAlbero a, int sum, int max){
  if (estVuoto(a))
    return max;
  else{
    sum+=radice(a);
    if (estVuoto(sinistro(a)) && estVuoto(destro(a))){
      if (sum>max){
        max = sum;}
      return max;}
    int sx = summax(sinistro(a), sum, max);
    int dx = summax(destro(a), sum, max);
    return sx>dx ? sx : dx;}
}

TipoAlbero figlio_lontano(TipoAlbero a) {
  if (estVuoto(a))
    return albBinVuoto();
  else
    return creaAlbBin(summax(a,0,-100),figlio_lontano(sinistro(a)),figlio_lontano(destro(a)));
}
