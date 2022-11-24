#include<stdio.h>

void main() {
            char a;
            printf("Enter the character: ");
            scanf("%c",&a);
            if(a>=97 && a<=122)
                printf("%c is Small letter.\n\n",a);
             else
                printf("%c is Capital letter.\n\n",a);

}
                
