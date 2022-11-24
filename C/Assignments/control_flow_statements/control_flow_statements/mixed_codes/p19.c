#include<stdio.h>

void main() {
            char a;
            printf("Enter the character: ");
            scanf("%c",&a);

            if(a=='a' || a=='e'||a=='i' || a=='o'||a=='u' || a=='A'||a=='E' || a=='I'||a=='O' || a=='U')//if char==vowel
                printf("%c is Vowel.\n\n",a);

             else
                printf("%c is Cansonant.\n\n",a);

}
                
