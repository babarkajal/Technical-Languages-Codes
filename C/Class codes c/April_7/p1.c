//@2 dimentional array 

int printf(const char*,...);

void main(){
		
		double arr[3][3]={1.0, 1.1 ,1.2 ,1.3 ,1.4 ,1.5 ,1.6 ,1.7 ,1.8};
		//print  data
		for(int i=0; i<3 ; i++){
			for(int j=0; j<3 ;j++)
				printf("%.1lf  ",arr[i][j]);

			printf("\n");
		}
}
