
int printf(const char *, ...);
int scanf(const char *, ...);


void main() {
	int a, b, c;

	printf("Enter Side1: ");
	scanf("%d", &a);
	
	printf("Enter Side2: ");
	scanf("%d", &b);
	
	printf("Enter Hypotenus : ");
	scanf("%d", &c);

	if(a > 0 && b > 0 && c > 0){
		if(a * a + b * b == c * c)
			printf("Triangle satisfies Pythagoras Theorem\n");
		else
			printf("Triangle does not satisfy Pythagoras Theorem\n");
	}
	else{
		printf("Sides are not allowed\n");
	}
}
