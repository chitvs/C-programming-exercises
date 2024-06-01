#include "aux.h"

int contaDecrescenti(TipoSCL lis){
  if (lis==NULL || lis->next == NULL)
    return 0;
  else{
    if (lis->next->info < lis->info)
      return 1 + contaDecrescenti(lis->next);
    else
      return contaDecrescenti(lis->next);}
}

TipoSCL cons(int e, TipoSCL l){
  TipoSCL nuovo = (TipoSCL)malloc(sizeof(TipoNodoSCL));
  nuovo->info = e;
  nuovo->next = l;
  return nuovo;
}

TipoSCL create(TipoSCL lis1, TipoSCL lis2){ 
  TipoSCL ris = NULL;
  while (lis1 != NULL && lis2 != NULL){
    ris = cons(lis1->info,ris);
    lis1 = lis1->next;
    ris = cons(lis2->info,ris);
    lis2 = lis2->next;}
  if (lis1 == NULL){
    while (lis2 != NULL){
      ris = cons(lis2->info,ris);
      lis2 = lis2->next;}}
  if (lis2 == NULL){
    while (lis1 != NULL){
      ris = cons(lis1->info,ris);
      lis1 = lis1->next;}}
  return ris;
}

TipoSCL inverti(TipoSCL l){
  TipoSCL ris = NULL;
  while (l!=NULL){
    ris = cons(l->info,ris);
    l = l->next;}
  return ris;
}

int mergeSequenziale(TipoSCL lis1, TipoSCL lis2){
  if (lis1== NULL && lis2 == NULL)
    return 0;
  else if (lis1 == NULL && lis2 != NULL)
    return contaDecrescenti(lis2);
  else if (lis2 == NULL && lis1 != NULL)
    return contaDecrescenti(lis1);
  else
    return contaDecrescenti(inverti(create(lis1,lis2)));
}
