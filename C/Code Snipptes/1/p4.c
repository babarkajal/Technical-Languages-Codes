void main() {
int val = 41;
void* ptr = &val;
printf("%d \n", *((int*)ptr) );
}
