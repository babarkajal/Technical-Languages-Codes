//size of union
//pragma pack is also applicable to the union

#pragma pack(1)
#include<stdio.h>
union varible{
	int a;
	char b;
	char c[30];
};


void main(){
	union varible var;
	printf("Size of union =%d\n",sizeof(var));
}	
