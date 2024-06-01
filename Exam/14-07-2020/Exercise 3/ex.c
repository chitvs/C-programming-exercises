#include "aux.h"

TipoInfoAlbero sommaMassimaPercorsoR(TipoAlbero a, int max, int percorso){
  if (estVuoto(a))
    return max;
  else{
    percorso += radice(a);
    if (destro(a) == NULL && sinistro(a) == NULL){
      if (percorso>max){
        max = percorso;}
      return max;}
    else{
      int leftMax = sommaMassimaPercorsoR(sinistro(a),max,percorso);
      int rightMax = sommaMassimaPercorsoR(destro(a),max,percorso);
      if (rightMax<=leftMax)
        return leftMax;
      else
        return rightMax;}}
}

TipoInfoAlbero sommaMassimaPercorso(TipoAlbero a){
  return sommaMassimaPercorsoR(a,0,0);
}
