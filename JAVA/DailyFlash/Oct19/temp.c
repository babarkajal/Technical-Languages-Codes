#include <stdio.h>

void main(){
        int d = 10;
        int *a=&d;
        void *pt =&d;
        *a = 10;
        printf("%d\n",*a == *(int*)pt);
        printf("data %d \n",*a);
        printf("%p\n",a);
        char *str = "no";
        printf("%d\n",str=="no");
        printf("%p\n",&d);
        *a = *a++;
        printf("data in *a %d\n",*a);
        printf("data in d %d\n",d);

}
