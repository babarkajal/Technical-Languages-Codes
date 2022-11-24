int printf(const char*,...);


void main(){
		int val=10;
		int *iptr=&val;
		
		*iptr++;
		
		printf("%d\n",*iptr);//Garbage bcoz now it pointing to next location
		printf("%d\n",val);
}
