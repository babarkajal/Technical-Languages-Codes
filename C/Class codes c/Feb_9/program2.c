int printf(const char*,...);

void main() { 
		
		void fun() {
			int a=10;
			printf("%d",a);
			
			fun();       //recurrsive call
			}

fun();  //call from main

}
