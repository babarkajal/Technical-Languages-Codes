#include <stdio.h>

auto int i=4; //error

int main(){
	int i=1;
	{
		auto int i=2;
		{
			auto int i=3;
			printf("i= %d\n",i);
		}
		printf("i= %d\n",i);
	}
	printf("i= %d\n",i);
}
		
