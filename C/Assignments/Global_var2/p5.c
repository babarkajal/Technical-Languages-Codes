int printf(const char*,...);

//Function declaration
void fun1();
void fun2();
void fun3();

//Global varibles
int CPU=0,Machine=1;

void main() {
                printf("\n------COMPUTER System------\n");
		printf("CPU= %d\tMachine= %d",CPU,Machine);
		fun1();
}

void fun1() {
                int Hard_disk=2,RAM=3;
		printf("\n------Memory & computer system------\n");
		printf("CPU= %d\tMachine= %d\tHard Disk= %d\tRAM= %d\n",CPU,Machine,Hard_disk,RAM);
		fun2();
		
}
void fun2() {
                int OS=4,loader=5;
		printf("\n------OS & computer system------\n");
		printf("CPU= %d\tMachine= %d\tOS= %d\tLoader= %d\n",CPU,Machine,OS,loader);
		fun3();
}
void fun3() {
                int Files=5,movies=6;
		printf("------Other files & system------\n");
		printf("CPU= %d\tMachine= %d\tFiles= %d\tMovies= %d\n",CPU,Machine,Files,movies);
	
}


