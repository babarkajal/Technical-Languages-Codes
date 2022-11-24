#include <stdio.h>
//int fun();


void main() {
        fun();
}

int* fun() {
        int a;
        printf("In fun\n" );
        return &a;
}
