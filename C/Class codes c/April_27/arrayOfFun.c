//Array of function pointer

int printf(const char*,...);
int scanf(const char*,...);

//fun prototype
void add(int ,int);
void sub(int ,int);
void mult(int ,int);
void div(int ,int);



void main(){
		//Array of function pointers
		void (*arr[4])(int,int)={add,sub,mult,div};
		
		int num1,num2;

		printf("calling functions using array of Fuction pointers\n");
		for(int i=0; i<4; i++){	
			
			printf("Enter two numbers: ");
			scanf("%d %d", &num1,&num2);
			arr[i](num1,num2);
		}
}


void add(int a,int b){
		
		printf("Addition= %d\n\n",a+b);
}

void sub(int a,int b){
		
		printf("Substraction= %d\n\n",a-b);
}
void mult(int a,int b){
		
		printf("Multiplication= %d\n\n",a*b);
}
void div(int a,int b){
		
		printf("Division= %d\n\n",a/b);
}
