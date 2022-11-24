#include<stdio.h>

int palindrome(int arrEle) {
						
				//if numbers remains same when it reversed
				int reversedNo,mod,div;
				reversedNo=0;
//for reversing
						for( div=arrEle; mod = div%10 ; reversedNo =reversedNo * 10 + mod  )
							{
							
							 div=div/10;
							}
			
//condition check if true it return 1 value to main otherwise 0
				if(arrEle == reversedNo)
					return 1;
				else 
					return 0;
}


int strong(int arrEle)	{
				//if factorial sum is same as orignal number then it's strong No.
				int sumFact=0,mod,div,fact;
			       	for( div=arrEle; mod = div%10 ; sumFact  += fact  )
				{
					fact=1;
					for(int i=1; i<= mod ; i++)
						fact *=i;		
				    	
					div=div/10;
				}
			
				
				if(arrEle == sumFact)
					return 1;
				else 
					return 0;
}



int evenOdd(int arrEle) {
				if(arrEle %2 ==0)
					return 1;
				else 
					return 0;

}



void main(){
		
		int n;
		printf(" Size of array: ");
		scanf("%d",&n);
		
		//Test Case 0 and 1
		
		while(n < 0 || n%2 == 0 || n > 10){
				printf("\n Invalid size");
				printf("(Please enter the odd No in bet 1 to 10).\n");
				printf(" Size of array: ");
				scanf("%d",&n);
				continue; 
		}//end loop
		
		int arr[n]; 	//array 
			
		printf(" Enter the %d integers: ",n);
		for(int i=0;i<n;i++)
				scanf("%d",&arr[i]); 		//taking array elements
	
		printf("\n");
		
			
		for( int i=0;i<n;i++){
						
					int j;
	
					//for palindrome
					if(arr[i] >=100) {
						 j = palindrome(arr[i]);  // call to palindrome fun
						if(j==1){
							printf(" %d is Palindrome Number.\n",arr[i]);
							continue;  //excute next iteration
							}
					}
		
			
					//check for strong condiont
					j = strong(arr[i]);	//call to strong fun
					if(j==1) {
							printf(" %d is Strong Number.\n",arr[i]);
							continue;
					}	
					
					
					//check even or odd
					j = evenOdd(arr[i]);  //call to evenOdd fun
					if(j==1)
						printf(" %d is Even Number.\n",arr[i]);	
						
					else	
						printf(" %d is odd Number.\n",arr[i]);	
					
		}
}


