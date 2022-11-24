#include<stdio.h>
void  main () {
        int i = 10 ,j;
        j = ++ i;
        printf("%d, %d", i, j);
}
/*
a.      11 10
b.      11 11
c.      10 11
d.      10 10
*/


/*
      Ans = b
      i = 10
      j = ++i
        =  i        // i =11 and return reference of i
      j = 11        // i chya box madhli value (incremented) J madhe copy keli jate
*/
