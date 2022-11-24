int printf(const char*,...);
int scanf(const char*,...);

void main(){
		printf("\n--------------cubes of the odd numbers ranging bet 1-50----------\n");
		
		for( int  i=1; i<=50 ; i++){
			
			if(i%2!=0){  //odd numbers
				printf("Cube of %d: %d\n",i,i*i*i);//cube
			}
		}
}

