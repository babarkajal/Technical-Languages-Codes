#include<stdio.h>

struct cricket{
	char name[40];
	float avrg;
	int runsInCareer;
};

void main(){
	struct cricket p[4]= { "Ms Dhoni", 137.85,4432,   //array of structure 
				    "virat kohli",37.85,5412 ,
				    "Hardik Pandya",28.86 , 1068,
				    "Rohit Sharma",31.6,4898
				};
	int moreRun;

	int low,low1;
	float lowAvg=p[0].avrg;
	int lowRun=p[0].runsInCareer;

	for(int i=0 ;i<4 ;i++){
			//condition for lowest avg
			if( p[i].avrg < lowAvg){
				low=i;
				lowAvg=p[i].avrg;
			}
			//condition for lowest runs
			if( p[i].runsInCareer < lowRun){
				low1=i;
				lowAvg=p[i].runsInCareer;
			}
	}
	
	//for runs more than or equal 4000
	int flag=0;
	printf("--------Player who has runs more than or equal 4000----------\n");
	for(int i=0 ;i<4; i++){
			if(p[i].runsInCareer >= 4000){
				printf("%s\n",p[i].name);
				flag=1;
			}
	}	
	if(flag==0)
		printf("No one has runs more than 4000\n\n");
	

		printf("---------Player who has lowest average run rate--------\n");
		printf("Name: %s\nAvg Rate: %f\nRuns in career: %d\n\n",p[low].name, p[low].avrg,p[low].runsInCareer);

		printf("Player who has lowest run score\n");
		printf("Name: %s\nAvg Rate: %f\nRuns in career: %d\n\n",p[low1].name, p[low1].avrg,p[low1].runsInCareer);
}
	
