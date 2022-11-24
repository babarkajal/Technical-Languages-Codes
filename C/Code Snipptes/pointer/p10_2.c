#include<stdio.h>

int main()
{
    static char *s[] = {"black", "white", "pink", "violet"};
    char **ptr[] = {s+3, s+2, s+1, s}, ***p;
    p = ptr;
    ++p;
    printf("%s", **p+1);
    
    //address 
    printf("address of s\n");
    for(int i=0; i<4; i++) {
	printf("%p\n",&s[i]);
    }
    return 0;
}
