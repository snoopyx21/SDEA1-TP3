#include "bool.h"
#include "nat0.h"
#include <stdio.h>

void main() {
  Nat zer=O();
  Nat deux=s(s(zer));
  Nat trois=s(s(s(zer)));
  Nat addi=add(zer,zer);
  Nat multi=mult(zer,zer);
  printn(addi);
  printn(multi);
}
