//Function pointer

int printf(const char*, ...);
int scanf(const char*, ...);



int add(float a,float b){
		
		printf("Addition= %f\n",a+b);
}



void main(){
	
	printf("fuction call by using function dereferncing function pointer\n");
	
	//initilization address by using function designator only
	int (*ptr)(int,int )=add;
	  
	//initilazing address by using address of operator
	int (*ptr1)(float ,float)=&add;


	//calling function by dereferncing function pointer
	(*ptr)(10,20);
	

	printf("fuction call by using function pointer name i.e. Designator\n");
	//calling by using function pointer name  
	ptr1(15,40);	

}
