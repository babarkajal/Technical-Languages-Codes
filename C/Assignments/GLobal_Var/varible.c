int printf(const char*,...);
int virat=16;                                                                   //Global varible
int Dhoni=10;							  		//Global varible
int match,stadium;
void football();								//Declaration of functions
void ac();

void main() {
	int rohit =45,sachin=11;						//Local varible
	printf("\n------main-----\n");
	printf("\nVirat= %d\tDhoni= %d\tRohit= %d\tSachin= %d\n",virat ,Dhoni,rohit,sachin);
        football();
}

void football() {
	int messy=12,ronaldo=7;							//Local varible
	printf("\n------Football-----\n");
	printf("\nVirat= %d\tDhoni= %d\tMessy= %d\tRonaldo%d\n",virat ,Dhoni,messy,ronaldo);
	ac();
}


void ac() {
	int warner=31,smith=50;							//Local varible
	printf("\n------A.C.------\n");
	printf("\nVirat= %d\tDhoni= %d\tWarner= %d\tSmith= %d\n",virat ,Dhoni,warner,smith);
}
