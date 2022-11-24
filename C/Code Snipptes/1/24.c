int printf(const char*, ...);
int a=20;
void main() {
extern static int a;
int *ptr = &a;
a=40;
printf("%d\n",a);
printf("%p\n",ptr);
}
