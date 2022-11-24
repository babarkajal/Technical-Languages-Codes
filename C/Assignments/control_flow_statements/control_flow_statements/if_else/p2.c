int printf(const char*,...);
int scanf(const char*,...);

void main(){
		char a,b;
		printf("Enter the two characters: ");
		scanf("%c",&a);
		scanf(" %c",&b);
		if(a == b)
			printf("%c = %c\n\n",a,b);
		
		else if(a < b){
			int i,c;
		        for( i=a+1,c=0;i<=b;i++){
				c++;
			}
			printf("Difference between %c and %c is %d\n\n",a,b,c);
		}
		
		else {	
			int i,c;
		        for( i=a-1,c=0;i>=b;i--){
				c++;
			}
			printf("Difference between %c and %c is %d\n\n",a,b,c);
		}
}
