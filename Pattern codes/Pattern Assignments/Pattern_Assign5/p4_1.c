int printf(const char*,...);

void main(){
		int var=7,num;
		for(int i=1; i <=7 ; i++){
				num=7;
				for(int j=1; j<=4; j++,num-=2){
	
					if(i <=4){
						if(i+j>4)
							printf("%d  ",num);
						else
							printf("   ");
					}
					else{
						if(i+j >= var)
							printf("%d  ",num);
						else	
							printf("   ");
					}
				    
				}
			if(i > 4)
				var+=2;
			printf("\n");
		}
}
				
