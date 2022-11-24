//malloc function and sructure


#include<stdio.h>

struct player{
	char name[30];
	int noOfmatches;
	float strikeRate;
	int rank;
};

void main(){
	struct player *p;
	p=(struct player*)malloc(sizeof(struct player));//return the address of allocated memory
	
	strcpy(p->name,"Rahul Sharma");
	p->noOfmatches = 250;
	p->strikeRate=123.89;
	p->rank=3;
	
	printf("\n---player information---\n");

	printf("name: %s\n",p->name);
	printf("no of matches: %d\n",p->noOfmatches);
	printf("strikerate: %f\n",p->strikeRate);
	printf("rank: %d\n",p->rank);
}
