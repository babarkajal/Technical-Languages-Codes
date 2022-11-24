#include<stdio.h>

int main() {
	int p, c, m, b, comp;
	float total;
	printf("Input : ");
	scanf("%d %d %d %d %d", &p, &c, &m, &b, &comp);
	total = (p+c+m+b+comp)/5;
	if(p>=0 && c>=0 && m>=0 && b>=0 && comp>=0 && p<=100 && c<=100 && m<=100 && b<=100 && comp<=100){
		if(total>=90){
			printf("Grade A");
		}else if(total>=80 && total<90){
			printf("Grade B");
		} else if(total>=70 && total<80){
			printf("Grade C");
		} else if(total>=60 && total<70){
			printf("Grade D");
		} else if(total>=40 && total<60){
			printf("Grade E");
		} else if(total<40){
			printf("Grade F");
		}
	} else {
		printf("Enter valid marks");
	}
	return 0;
}
