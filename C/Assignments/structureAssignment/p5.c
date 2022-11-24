#include<stdio.h>
#include<string.h>
char *gets(char*);

//structure defination
struct WC2019{
		char name[30];
		int run;
		int ball;
		int noOf4s;
		int noOf6s;
		float strikeRate;
		char out[10];

};
//function declaration
//void find_player(char,struct WC2019);
//void display(struct WC2019);

void main(){
	int a;	

	//varible of WC2019
	struct WC2019 p[7]={	
				"K.L.Rahul",57,78,3,2,73.08,"catch"
				,"R.Sharma",140,113,14,3,123.89,"catch"
				,"Virat.Kohli",77,65,7,0,118.46,"catch"
				,"H.Pandya",26,19,2,1,136.84,"catch"
				,"Ms.Dhoni",1,2,0,0,50.00,"catch"
				,"V.Shankar",15,15,1,0,100.00,"Not out"
				,"K.Jadhav",9,8,1,0,112.50,"Not out"
			};
	
	//display only names
	printf("-------Name of players(Batsman)--------\n");
	for(int i=0 ;i<7 ;i++){
		printf("%d. %s\n",i+1,p[i].name);
	}
	
	//find individual player's info
	char name[30];
	int i;
	do{
		printf("\n Enter the name of player: ");
		gets(name);

		i= find_player(name,p);

	}while(i==1);
	
	
	//for see all list
	printf("\nwant to see all players information press 1: ");
	scanf("%d",&a);
	if(a==1)
		display(p);
}//end of main


int find_player(char name[30],struct WC2019 p[7]){
	int x,flag=0,a;
	
		for(int i=0;i<7;i++){
				x=strcasecmp(p[i].name ,name);
				if(x==0){
					flag=1;
					a=i;
				}
		}
		if(flag==1){
			printf("\nPlayer informantion:-----------------\n");
			printf("Name: %s\n",p[a].name);
			printf("Run: %d\n",p[a].run);
			printf("Ball: %d\n",p[a].ball);
			printf("No of 4s: %d\n",p[a].noOf4s);
			printf("No of 6s: %d\n",p[a].noOf6s);
			printf("strike rate: %.2f\n",p[a].strikeRate);
			printf("Status: %s\n",p[a].out);
			return 0;
		}
		else{
			printf("Entered name is wrong\n");
			return 1;
		}

}


void display(struct WC2019 p[7]){
	printf("\n=====================WORLD CUP 2019=====================\n");
	printf("----------------------player information-------------------\n");
	printf("-----------------------------------------------------------------------------\n");
	printf("NAME\t\tRUN\tBALL\t4s\t6s\tStrike rate\t\n");
	printf("-----------------------------------------------------------------------------\n");
	for(int i=0 ;i<7 ;i++){
		printf("%s\t%d\t%d\t%d\t%d\t%.2f\t\t%s\n",p[i].name ,p[i].run ,p[i].ball ,p[i].noOf4s ,p[i].noOf6s ,                           p[i].strikeRate ,p[i].out);
	}
}
	


		
		
