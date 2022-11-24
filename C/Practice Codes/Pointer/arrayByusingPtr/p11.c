//program 11:

#include<stdio.h>

void main(){
		int n;
		//test case
		do{	
			printf("Enter the size of an array: ");
			scanf("%d",&n);
		}while(n<0);
		
		int arr[n];
		
		//accept array
		printf("Enter %d integers: \n",n);
		for(int i=0;i<n;i++){
				scanf("%d",arr+i);
		}
		
		printf("\nCheck whether number is palindrome ,strong,even or odd\n");
		int result;
		for(int i=0; i<n ;i++){
				
				//to check palindrome
				if(*(arr+i)>=100){
				 	result = palindrome(arr+i);//by add
					if(result==1){
						printf("Number %d is palindrome number\n\n",*(arr+i));
						continue;//if number is palindrome
					}
				}

				//to check if strong
				result=strongNo(arr+i);//by address
				if(result==1){
					printf("Number %d is a strong number\n\n",*(arr+i));
					continue;
				}
				
				//to check even odd
				result=even_odd(arr+i); //by add
				if(result==1)
					printf("Number %d is even\n\n",*(arr+i));
				else
					printf("Number %d is odd\n\n",*(arr+i));
			
				
		}
}

//pallindrome function

int palindrome(int *x){
			int div,mod,reversedNo=0;
			for(div=*x;div!=0; div /=10 ){
				mod=div%10;
				reversedNo =reversedNo*10 +mod;
			}
			if(*x == reversedNo)
				return 1;
			else
				return 0;
}
			
//strong number
int strongNo(int *x){
			
			int fact=1,mod,sumFact=0;
			for(int div=*x ; div!= 0 ;div /=10){
				fact=1;	
				mod=div%10;
				for(int i=1;i<=mod ;i++){
					fact =fact*i;
				}
				sumFact +=fact;
				
			}
			if(*x==sumFact)
				return 1;
			else
				return 0;
}	

int even_odd(int *x){
		if(*x%2==0)
			return 1;
		else
			return 0;
}			
