#include<stdio.h>

void main() {
            char a;
            printf("Enter the character: ");
            scanf("%c",&a);
            if(a>=97 && a<=122)
                printf("%c is LOWER CASE character.\n\n",a);
             else
                printf("%c is an UPPER CASE character.\n\n",a);

}
                
