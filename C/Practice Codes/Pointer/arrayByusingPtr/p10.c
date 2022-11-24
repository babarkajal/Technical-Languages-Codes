//accpet an array of characters and print them in alphabetical order 

#include<stdio.h>

void main(){
		
		char *ptr;
		int i,n;
		printf("Enter size of an array: ");
		scanf("%d",&n);	
		char arr[n];
		
		ptr=arr;//initialized to the arr

		//accpet array
		printf("Enter %d characters: \n",n);
		for(i=0; i<n; i++){
			scanf(" %c",(ptr+i));
		}
		*(ptr+i)='\0';
		
		//sort
		char *temp;
		for(i=0; i<n; i++){
			for(int j=0;j<n-1;j++){
			 	
				//convert all to lower case
				if('A' <=*(ptr+i) && *(ptr+i) <= 'Z')
					*(ptr+i) +=32;

				//swap if greater
				if(*(ptr+(j) ) > *(ptr+(j+1) ) ){
				
					*temp=*(ptr+j);
					*(ptr+j)= *(ptr+(j+1) );
					*(ptr+(j+1) ) = *temp;
				}
			}
		}

		//print
		printf("\nsorted character array: ");
		for( i=0;i<n;i++)
			printf("%c",*(ptr+i));
		printf("\n\n");

}
