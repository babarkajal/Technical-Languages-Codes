#include <stdio.h>
int fun(int x, int *py , int **pz) {
    int y , z;
    **pz +=1;
    z= **pz;
    *py +=2;
    y = *py;
    x +=3;
    return x+y+z;

}

int main() {
    int p,*q,**r;
    p = 4;
    q = &p;
    r = &q;
    printf("%d\n", fun(p,q,r));
    return 0;
}
