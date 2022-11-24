
int printf(const char *, ...);
int scanf(const char *, ...);


void main() {
	int a, c;
	float b;

	printf("Enter Principal Amount : ");
	scanf("%d", &a);
	
	printf("Enter Rate of Interest : ");
	scanf("%f", &b);
	
	printf("Enter Number of Years : ");
	scanf("%d", &c);

	if(a > 0 && b > 0 && c > 0 && b <= 100){
		printf("Simple Interest :%f \n", (a * b * c)/100);

	}
	else{
		printf("Values are wrong\n");
	}
}
