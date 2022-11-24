int printf(const char *,...);
int scanf(const char *,...);

void main(){
	int rem,count=0,col;
	printf("Enter column number: ");
	scanf("%d",&col);
	for(int olc=1; olc<=120; olc++){
		
		int num=olc,rev=0;
		while(num>0){
			rem=num%10;
			num=num/10;
			rev = rev*10+rem;
		}
		if(rev==olc){
			printf(" %d ",olc);
			count++;
		}
		if(count==col){
			printf("\n");
			count=0;
		}
	}
//	printf("\n");
}
			
