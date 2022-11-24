#include <stdio.h>
//#include <graphics.h>
#include <unistd.h>
#define i '*'
#define j '_'

void main(){
	
	char arr[20][43]={};
	char mukut[20][40]={};
	
	char g[20][43]={};

	for(int olc=0; olc < 20 ;olc++){
		for(int ilc=0; ilc < 43;ilc++){
			arr[olc][ilc]=32;
			g[olc][ilc]=32;
		}
	}
	
	
	arr[5][18]='.';


	mukut[4][19]=mukut[4][21]=mukut[4][23]=mukut[3][21]=mukut[3][23]='=';
	mukut[4][20]=mukut[3][22]=mukut[4][22]='=';
	mukut[4][20]='=';
	mukut[2][23]='^';
	arr[5][22]=arr[5][24]=arr[5][26]=i;

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

	//sond
	arr[13][10]='/';
	arr[14][9]='/';
	arr[14][10]='_';
	arr[14][11]='_';

	
	

	for(int olc=0; olc < 20;olc++){
		for(int ilc=0; ilc < 40;ilc++){
			
		if(olc==6 && ilc==19)
			printf("\033[0m__");
		
		if(olc==7 && ilc==19)
			printf("\033[0m0");
		
		printf("\033[1;31m%c" ,arr[olc][ilc]);
		printf("\033[1;33m%c" ,mukut[olc][ilc]);
	}
		sleep(1);
	printf("\n");
	}

	//nav
	g[0][17]=g[1][18]=g[2][19]='\\';
	 
	for(int k=10;k < 43;k++)
		g[3][k]='_';
	
	g[4][12]=g[4][16]=g[4][19]=i;
	g[5][12]=g[5][16]=g[5][19]=i;
	g[6][12]=g[6][16]=g[6][19]=i;
	g[7][12]=g[7][16]=g[7][19]=i;
	g[8][12]=g[8][16]=g[8][19]=i;
	g[8][9]=g[8][10]=g[8][11]=g[8][12]=g[8][13]=g[8][14]=g[8][15]=i;
	
	g[9][9]=g[9][12]=g[9][19]=g[9][16]=i;
	
	g[10][12]=g[10][16]=g[10][19]=i;
	g[10][10]=g[10][11]=i;
	g[11][16]=g[11][19]=i;
	g[12][16]=g[12][19]=i;
	//R
	g[4][25]=i;
	g[5][25]=i;
	g[6][25]=i;
	g[7][25]=g[7][22]=i;
	g[8][24]=g[8][23]=i;
	g[9][23]=i;
	g[10][24]=i;
	g[11][25]=i;
	g[12][25]=i;

	//Y
	g[4][32]=i;
	g[5][32]=i;
	g[6][32]=g[6][29]=i;
	g[7][31]=g[7][30]=i;
	g[8][30]=i;
	g[9][31]=g[9][31]=g[9][33]=g[9][35]=i;
	
	
	for(int k=4;k<13;k++)
		g[k][36]=g[k][39]=i;


	for(int olc=0; olc < 20;olc++){
		for(int ilc=0; ilc < 43;ilc++){
			printf("\033[1:36m%c",g[olc][ilc]);			

		}
		sleep(1);
		printf("\n");	
	}
}
