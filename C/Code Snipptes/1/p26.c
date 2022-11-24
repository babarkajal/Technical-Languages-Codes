int printf(const char*, ...);
extern int a;
void main() {
int i=1;
int a=4;
{
auto int i=2;
{
static int i=3;
printf("%d\n",i);
}
printf("%d\n",i);
}
printf("%d\n",i);
printf("%d\n",a);
}
