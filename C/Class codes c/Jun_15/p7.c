//pointer to a strcture 

struct pad{
	char a;
	int b;
	char c;
	float d;
};

main(){
	struct pad var;
	int *ptr=&var;//no error
}
