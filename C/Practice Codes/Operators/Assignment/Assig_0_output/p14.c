#include <stdio.h>

void main() {
  int x = 5, y=6;
  x = x^y;  // x = 3
  y = x^y;  // y = 5
  x = x^y;  // x = 6
  printf("x= %d\n",x );
  printf("y= %d\n",y );
}
