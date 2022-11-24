int printf(const char *, ...);
void main() {
int (*ptr) [4];
printf("%ld \n", sizeof(ptr));
printf("%ld \n", sizeof(*ptr));
}
