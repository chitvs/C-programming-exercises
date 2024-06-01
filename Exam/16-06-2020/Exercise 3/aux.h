#pragma once
#include <stdio.h>
#include <stdlib.h>

// Struttura Albero
typedef int TipoInfoAlbero;

typedef struct StructAlbero {
  TipoInfoAlbero info;
  struct StructAlbero* sinistro;
  struct StructAlbero* destro;
} TipoNodoAlbero;

typedef TipoNodoAlbero* TipoAlbero;

// Implementazione AlbBin
TipoAlbero albBinVuoto();
TipoAlbero creaAlbBin(TipoInfoAlbero info, TipoAlbero sx, TipoAlbero dx);
bool estVuoto(TipoAlbero a);
TipoInfoAlbero radice(TipoAlbero a);
TipoAlbero sinistro(TipoAlbero a);
TipoAlbero destro(TipoAlbero a);

// Esercizio da svolgere
void nodoDivisibile(TipoAlbero a);
