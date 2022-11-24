int printf(const char*,...);

void main(){
		
		int arr[3][3]={ {1,2},3,4,5,{6} };  //if values are not given then it set to zero
		for(int i=0; i<3 ; i++){
			for(int j=0; j<3 ;j++)
				printf("%d  ",arr[i][j]);

			printf("\n");
		}
}
