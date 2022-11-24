int printf(const char*,...);

void main() {
         int a=10;
	 //printf("a=%d\n",a);
       	int *p=&a;
        int **c=&p;
	int ***d= &c;
	int ****e= &d, *****f=&e, ******g=&f,*******h=&g;
        printf("%d\n",*p);
        printf("%d\n",**c);
        printf("%d\n",***d);
        printf("%d\n",****e);
        printf("%d\n",*****f);
        printf("%d\n",******g);
        printf("%d\n",*******h);

        printf("%p\n",p);
        printf("%p\n",&p);
}
