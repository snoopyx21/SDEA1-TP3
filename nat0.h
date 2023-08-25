// fichier nat0.h
#include "bool.h"
#include <stdio.h>

#ifndef __NAT_H__
#define __NAT_H__

#define _Nat_ struct sn *

struct sn {
    char f;       // symbole d'opération 0 ou s
    _Nat_ p; // prédécesseur
                         };

typedef _Nat_ Nat;     //un Nat est un pointeur sur une structure sn

Nat O(); //le naturel 0
Nat s(Nat n); //fonction successeur
Nat add(Nat n, Nat m); //addition
Nat mult(Nat n, Nat m); //multiplicaation


Bool zero(Nat n); //test de nullité
Bool estsucc(Nat n); //test d'égalité

void printn(Nat n); //affichage de n en unaire
Nat u2nat(unsigned u); //traduction de décimal à unaire
unsigned nat2u(Nat n); //transofrme un Nat en entier non signé



#endif 
