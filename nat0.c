#include "nat0.h"
#include "bool.h"
#include <stdio.h>
#include <stdlib.h>

Nat O(){
  Nat a1=malloc(sizeof(Nat));
  a1->f='0';
  a1->p=NULL;
  return a1;
}

Nat s(Nat n){
  Nat a2=malloc(sizeof(Nat));
  a2->f='s';
  a2->p=n;
  return a2;
}

Nat add(Nat n, Nat m){
  while(n->f=='s'){
    m=s(m);
    n=n->p;
  }
  return m;
}

Nat mult(Nat n,Nat m){
  if(n->p==NULL || m->p==NULL){
    return O();
  }
  else 
    return add(m,(mult(n->p,m)));
}

void printn(Nat n){
  while(n->f =='s'){
    printf("s(");
    n=n->p;
  }
  printf("0)..)\n");
}
  
Bool zero(Nat n){
  if(n->f=='0'){
    return 1;
  else
    return 0;
}

Bool estsucc(Nat n){
  return !(zero(n));
}

Bool egN(Nat n, Nat m){
  while((n->f) != '0'){
    if((m->f) =='0')
      return 0;
    m=m->p;
    n=n->p;
  }
}

Bool spp(Nat n, Nat m){
}


