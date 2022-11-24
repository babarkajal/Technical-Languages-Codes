int printf(const char*,...);

void main(){
	int a=1;
	for(int i=1;i<=3;i++){

			for(int j=1;j<=i;j++,a++){

				printf("%d ",a*a);
			}
	      printf("\n");
	}

}
