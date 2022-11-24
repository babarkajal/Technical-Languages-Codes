int printf(const char *, ...);
void main() {
int *arr[5];
printf("%ld \n", sizeof(arr));
printf("%ld \n", sizeof(*arr));
printf("%ld \n", sizeof(**arr));
}
