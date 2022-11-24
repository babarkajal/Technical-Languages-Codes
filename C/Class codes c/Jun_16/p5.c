//passing a structure object by value

#include<stdio.h>

//void songinfo(struct song);

struct song{
	char songName[40];
	int noOfInstrumentsUsed;
	float time;
	char singerName[30];
}songvar={"Perfect",13,4.20,"Edsheeran"};

main(){
	songinfo(songvar); //pass entire structure by value
}

void songinfo(struct song info){
		printf("\nSong name: %s\n",info.songName);
		printf("No of instruments are used = %d\n",info.noOfInstrumentsUsed);
		printf("Time: %f\n",info.time);
		printf("singer name: %s\n",info.singerName);

}
