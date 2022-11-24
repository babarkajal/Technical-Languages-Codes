#include<stdio.h>

void main(){

for(int lc=1;lc<=8;lc++){
       
	if(lc<=4){

	for(int ilc=1;ilc<=5-lc;ilc++){

		printf("\t*");
	}

	printf("\n");


	}
	else{
		for(int olc=1;olc<=lc-4;olc++){
                   
			printf("\t*");
		}

		printf("\n");
	}

   }

}

