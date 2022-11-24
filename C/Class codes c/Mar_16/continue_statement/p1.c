int printf(const char*,...);

void main() {
		int i;
		for(i=0;i<=10;i++){
				if(i%2==0){
					continue;
				}
			printf("%d\n",i);//print all odd numbers
		}
}

// continue:- used to skip the iteration in loops only.
//It continue the next iteration without excuting the next part of loop
		
