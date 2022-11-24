
int printf(const char *, ...);
int scanf(const char *, ...);
void exit(int);

void main() {

	float phy, chem, bio, math, comp;

	printf("Enter Marks for phy chem ,bio, math, comp out of 100: \n");
	scanf("%f%f%f%f%f", &phy, &chem, &bio, &math, &comp);

	if(phy < 0 || chem < 0 || bio < 0 || math < 0 || comp < 0 ||
			phy > 100 || chem > 100 || bio > 100 || math > 100 || comp > 100 ){
		
		printf("marks entered negative or greater than 100\n");
		exit(0);
	}
	
	float per = (phy + chem + math + bio + comp) / 5;
	printf("Percentage : %5.3f\n" , per);

	if(per >= 90){
		printf("Grade A\n");
	}
	else if(per >= 80){
		printf("Grade B\n");
	}
	else if(per >= 70){
		printf("Grade C\n");
	}
	else if(per >= 60){
		printf("Grade D\n");
	}
	else if(per >= 40){
		printf("Grade E\n");
	}
	else {
		printf("Grade F\n");
	}

	
}
