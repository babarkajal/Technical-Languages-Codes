#include <stdio.h>

void main() {
      int a;
      switch(a=10) {
        case 0:
                printf("Case 0\n");
                printf("a= %d\n",a);
                break;
        case 1:
              printf("Case 1\n");
              printf("a= %d\n",a);
              break;
        case 10:
              printf("case 10\n");
              printf("a= %d\n",a);
              break;

       default:
              printf("Default\n");
              break;


      }

}
