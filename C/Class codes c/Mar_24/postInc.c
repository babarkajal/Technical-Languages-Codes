int printf(const char*,...);


void main(){
		int val=10;
		int *iptr=&val;
		
		printf("%d\n",(*iptr)++); //bracket has higher precedance than the ++ operator

}
