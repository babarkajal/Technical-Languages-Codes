#include<stdio.h>

int main() {
	int n1, n2, n3;
	printf("Input : ");
	scanf("%d %d %d", &n1, &n2, &n3);
	n1>0 && n2>0 && n3>0 && n1*n1 + n2*n2 == n3*n3 ?printf("Output : Satisfies pythagoras therom"):printf("Output : Does not satisfies pythagoras therom");
	return 0;
}
