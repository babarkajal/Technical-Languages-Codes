#include<stdio.h>

int main() {
	int p, n;
	float r;
	printf("Input : ");
	scanf("%d %f %d", &p, &r, &n);
	p>=0 && r>=0 && n>=0 ? printf("SI : %f", p * r * n/100):printf("Enter valid input");
	return 0;
}
