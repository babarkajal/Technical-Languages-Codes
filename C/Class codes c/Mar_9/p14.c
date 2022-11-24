int printf(const char*,...);


void main() {
		for(int i=1;i<=50;i++) {
				if( i%5==0 && i%2!=0 ) {   //both conditions should be true
						printf("%d\n",i);//print the numbers divisible by 5 but not by 2
				}
		}

}
