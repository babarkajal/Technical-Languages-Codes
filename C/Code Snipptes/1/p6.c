#include<stdio.h>
void main(){
char *string;
string = "CAFEBABE";
char **cpointer=&string;
printf("%c\n",**cpointer);
printf("%c\n",*(++*cpointer));
printf("%c\n",*(++*cpointer));
printf("%c\n",*(++*cpointer));
printf("%c\n",*(++*cpointer));
printf("%c\n",*(++*cpointer));
printf("%c\n",*(++*cpointer));
printf("%c\n",*(++*cpointer));
}

