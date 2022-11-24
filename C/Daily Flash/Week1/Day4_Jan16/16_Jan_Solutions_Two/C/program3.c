
int printf(const char *, ...);
int scanf(const char *, ...);


void main() {
	int c;

	printf("Enter Year  : ");
	scanf("%d", &c);
	
	if(c > 0 && c % 400 == 0 && c % 100 == 0){
		printf("Leap Year\n");
	}
	else if (c > 0 && c % 4 == 0 && c % 100 != 0){
		printf("Leap Year\n");
	}
	else if(c <= 0){
		printf("not Valid Entry For Year\n");
	}
	else {
		printf("Not Leap Year\n");
	}
}
