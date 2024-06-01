#include "aux.h"

void nodoDivisibile(TipoAlbero a) {
  if (estVuoto(a) || sinistro(a) == NULL && destro(a) == NULL)
    return;
  if (radice(a) == 0){
    if (sinistro(a) != NULL && destro(a) != NULL){
      if (radice(destro(a)) != 0 || radice(sinistro(a)) != 0){
        a->info = 1;}
      return nodoDivisibile(sinistro(a)), nodoDivisibile(destro(a));}
    else{
      if (sinistro(a) != NULL){
        if (radice(sinistro(a)) != 0){
          a->info = 1;}
        return nodoDivisibile(sinistro(a));}
      else{
        if (radice(destro(a)) != 0){
          a->info = 1;}
        return nodoDivisibile(destro(a));}}}
  else{
    if (destro(a) != NULL && sinistro(a) != NULL){
      if ((radice(sinistro(a))!=0 && radice(a)%radice(sinistro(a))==0) || (radice(destro(a))!=0 &&  radice(a)%radice(destro(a))==0)){
        a->info = 1;}
      return nodoDivisibile(sinistro(a)), nodoDivisibile(destro(a));}
    else{
      if (destro(a) != NULL){
        if (radice(destro(a)) !=0){
          if (radice(a)%radice(destro(a))==0)
            a->info = 1;}
        return nodoDivisibile(destro(a));}  
      else{
        if (radice(sinistro(a)) !=0){ 
          if (radice(a)%radice(sinistro(a))==0)
            a->info = 1;}
        return nodoDivisibile(sinistro(a));}}}
}
