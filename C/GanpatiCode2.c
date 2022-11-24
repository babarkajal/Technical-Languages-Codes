#include <stdio.h>
#include <unistd.h>
#define i '*'

void main(){
	
		
	char arr[20][40];
	

	for(int olc=0; olc <20;olc++)
		for(int ilc=0; ilc <40;ilc++)
			arr[olc][ilc]=32;

	
	arr[5][18]='.';




	arr[4][20]=arr[4][22]=arr[4][24]=arr[3][22]=arr[3][24]='=';
	arr[2][24]='^';
	arr[5][22]=arr[5][24]=i;
	

	
//	arr[2][20]=arr[2][19]=arr[3][18]='.';	
//	arr[3][21]=arr[3][22]=arr[3][20]='.';

//	arr[4][19]='.';
//	arr[5][14]='.';
		
	//eyes
	arr[7][18]='/',arr[6][19]='_',arr[7][19]='.',arr[7][20]='\\';
//	arr[0][5]=arr[1][4]=arr[1][5]='*',arr[0][6]=arr[2][4]='~';
//	arr[0][5]=arr[1][4]='~';
//	arr[2][4]=arr[1][5]=arr[0][7]='\'';

	arr[5][20]=arr[6][16]=arr[7][14]=arr[8][13]=i;
	arr[9][12]=i;
	arr[10][11]=i;
	//--
	arr[10][12]=arr[10][13]='-';
	arr[11][12]=arr[11][13]=arr[12][12]=arr[12][13]='-';
	
	arr[11][11]=i;
	arr[12][11]=arr[12][24]=arr[11][23]=arr[11][21]=arr[12][20]=i;
	arr[13][11]=arr[13][23]=arr[13][20]=i;
	arr[14][12]=arr[14][22]=i;
	arr[14][13]=arr[14][21]='.';
	arr[15][15]=arr[15][17]=arr[15][19]=i;
	
	printf("HIiii\n");	

	for(int olc=0; olc < 20;olc++){
	for(int ilc=0; ilc < 40;ilc++){
		printf("%c" ,arr[olc][ilc]);
	}

	sleep(1);
	printf("\n");
	}
	
	
}
