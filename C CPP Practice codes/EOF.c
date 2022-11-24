#include <stdio.h>

void main() {
    //as we know EOF is internallt defined as -1
    int var = -1;
    char ch;
    printf("Enter var: ");
    scanf("%d",&var);
    printf("var = %d \n",var );
    getchar();
    ch = getchar();
    printf("Entered char: %c\n",ch);
    if(ch == EOF) {
        printf("Matched\n");
    }
    else {
        printf("Not matched\n");
    }
}
