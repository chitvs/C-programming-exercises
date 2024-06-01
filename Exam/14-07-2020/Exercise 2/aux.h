#pragma once
#include <stdio.h>
#include <stdlib.h>

#ifndef SCL_H
#define SCL_H

typedef int TipoInfoSCL;

struct TipoNodoSCL{
	TipoInfoSCL info;
	struct TipoNodoSCL* next;
};

typedef TipoNodoSCL* TipoSCL;

// prints a list to stdout
void print(TipoSCL list_);
TipoSCL generate(const int& number_of_nodes_);
TipoSCL copySCL(TipoSCL src);
void freeSCL(TipoSCL list_);
TipoSCL generateFromArray(TipoInfoSCL *arr, int len);

#endif
int sommaLista(TipoSCL l, int i, int j);

/////////FUNZIONI COMPITO 
int sommaElementi(TipoSCL lis, int i, int j);
void sommatoriaDispari(TipoSCL lis, TipoSCL ris);
