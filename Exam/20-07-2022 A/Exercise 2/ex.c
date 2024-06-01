#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "aux.h"

int posizioni_alternanza(TipoLista l) {
  if (estVuota(l)){
    return 0;}
  if (estVuota(cdr(l))){
    return 1;}
  if (estVuota(cdr(cdr(l)))){
    return 2;}
  if (car(l) == car(cdr(cdr(l)))){
    return 1 + posizioni_alternanza(cdr(l));} 
  else{
    return 2;}
}

int length(TipoLista l){
  if (estVuota(l))
    return 0;
  else
    return 1 + length(cdr(l));
}

char* aux(TipoLista l, int k){
  int i=0;
  int j = length(l)-k;
  char* result = (char*)malloc(sizeof(char)*j);
  while (k>0){
    l = cdr(l);
    k--;}
  while (!estVuota(l)){
    result[i] = car(l);
    l = cdr(l);
    i++;}
  result[i] = '\0';
  return result;
}

char* prefisso_alternante(TipoLista *liste, int n) {
  int max=0;
  int indice;
  for (int i=0;i<n;i++){
    int k = posizioni_alternanza(liste[i]);
    if (k>max){
      max = k;
      indice = i;}}
  return aux(liste[indice], posizioni_alternanza(liste[indice]));
}
