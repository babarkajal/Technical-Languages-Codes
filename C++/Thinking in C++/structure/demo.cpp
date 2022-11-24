#include <stdio.h>

int main() {
int i = 10;
void* vp = &i; // OK in both C and C++
int* ip = vp; // Only acceptable in C

}
