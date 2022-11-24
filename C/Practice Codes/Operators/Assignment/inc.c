#include <stdio.h>


void main() {
  int x= 10,y=8;
  int ans = ++x + ++x + ++y * x++ - y++ + x++;
  printf("Ans = %d\n",ans);
  printf("X = %d\n",x);
  printf("Y = %d\n",y);
  x = 10, y = 8;
  ans = ++x + ++x + (++y * x++) - y++ + x++;  //116
  printf("ans() = %d\n", ans);

}
