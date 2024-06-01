#pragma once

#include <stdbool.h>

typedef int TipoInfoAlbero;

typedef struct StructAlbero {
  TipoInfoAlbero info;
  struct StructAlbero* destro;
  struct StructAlbero* sinistro;
} TipoNodoAlbero;

typedef TipoNodoAlbero* TipoAlbero;

TipoAlbero albBinVuoto();
TipoAlbero creaAlbBin(TipoInfoAlbero info, TipoAlbero sx, TipoAlbero dx);
bool estVuoto(TipoAlbero a);
TipoInfoAlbero radice(TipoAlbero a);
TipoAlbero sinistro(TipoAlbero a);
TipoAlbero destro(TipoAlbero a);
void stampaInfoAlbero(TipoInfoAlbero c);
void stampaParentetica(TipoAlbero a);
void stampaAlbero(TipoAlbero a);
void diffMinFogliaMaxAntenato(TipoAlbero a);
