#include<stdio.h>

void main() {
            char a;
            printf("Enter the character: ");
            scanf("%c",&a);
            if(a>=97 && a<=122)
                printf("Upper case: %c.\n\n",a-32);
             else
                printf("Lower case: %c.\n\n",a+32);

}
                
