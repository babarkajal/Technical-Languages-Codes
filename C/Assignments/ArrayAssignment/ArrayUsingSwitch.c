#include<stdio.h>

//All Functions for program

void p1(){
		printf("\nTake size of array from user and elements, print that array.\n");
		int n;
		printf("Enter the size: ");
		
		scanf("%d",&n);
		int arr[n];
				
		printf("Enter the %d integers: ",n);
		for(int i=0;i<n;i++)
				scanf("%d",&arr[i]);
		
		printf("Array elements are: ");
		for(int i=0;i<n;i++)
				printf("\t%d",arr[i]);

		printf("\n");
}


void p2(){
		printf("\nTake integer array.Take size of array from user and elements , print the Sum of elements in array.\n");
		int n;
		printf("Enter the size: ");
		
		scanf("%d",&n);
		int arr[n];
		int sum=0;
		
		printf("Enter the %d integers: ",n);
		for(int i=0;i<n;i++){
				scanf("%d",&arr[i]);
				sum +=arr[i];
		}
		printf("Addition of all array elements: %d\n",sum);
}



void p3(){
		printf("\nTake the intger array.Take size of array from user and elements too, Calculate Sum of squares of all even elements in array and print it.\n");
		int n;
		printf("Enter the size: ");
		
		scanf("%d",&n);
		int arr[n];
		int sumSquare=0;		
		
		printf("Enter the %d integers: ",n);
		for(int i=0 ; i < n ; i++){
				
				scanf("%d",&arr[i]);
				
				if(arr[i]%2==0)
					sumSquare= sumSquare + (arr[i] * arr[i]);
					
		}
		printf("Addition of sqaure of even array elements: %d\n",sumSquare);
		
}

void p4(){
		printf("\nTake float array.Take size of array from user and elements too, Calculate Multiplication of all odd index based elements in array and print it.\n");
		int n;
		printf("Enter the size: ");
		
		scanf("%d",&n);
		float arr[n];
		float mult=1;		
		
		printf("Enter the %d Floating value: ",n);
		for(int i=0 ; i<n ; i++){
				
				scanf("%f",&arr[i]);
				
				if(i%2 != 0)
					mult=mult*arr[i];
					
		
		}
		printf("Multiplication of odd index based elements in array: %f\n",mult);
		
}


void p5(){
		printf("\nTake an array of integers.Take size of array from user and elements too, Find Smallest Element & Largest element from array and print it.\n");
		int n;
		printf("Enter the size: ");
		
		scanf("%d",&n);
		int arr[n];
		int max,min,flag=1;
		
		printf("Enter the %d integers: ",n);
		for(int i=0 ; i < n ; i++,flag=0){
				
				scanf("%d",&arr[i]);
				if(flag==1)
				        min=max=arr[0];
				 
				
		                if(arr[i] < min)
					min = arr[i];
				else if(arr[i] > max)
					max= arr[i];
					
								
		}
		printf("smallest number: %d\n",min);
		printf("Largest number: %d\n",max);
		
}

void p6(){
printf("\nTake an array of integers Take size of array from user and elements too, find occurrence of 1's (Ones as in digits) in array.\n");
		int n;
		printf("Enter the size: ");
		
		scanf("%d",&n);
		int arr[n],count=0,i,mod,div;
				
		printf("Enter the %d integers: ",n);
		for(int i=0;i<n;i++)
				scanf("%d",&arr[i]);
		
		printf("Array elements are: ");
		
		for(int i=0;i<n;i++){
				for(div=arr[i]; div!=0;div /=10){					
						mod = div%10;
						if(mod == 1)
						count++;
				}
		}
				
		printf("occurance of 1's in array: %d\n",count);		

}

void p7(){
		printf("\nTakean array of characters.Take size of array from user and elements too, Toggle case of all vowels in array and print it\n");
		int n;
		printf("Enter the size: ");
		
		scanf("%d",&n);
		char carr[n];
				
		printf("Enter the %d characters: ",n);
		for(int i=0;i<n;i++) {
				scanf(" %c",&carr[i]);
				
				if(carr[i] >=65 && carr[i] <= 90)
							carr[i] = carr[i]+32;
				
				else if(carr[i] >=95 && carr[i]<=122)
							carr[i] -=32;
				
				else
					carr[i]=carr[i];
		}
		printf("TOGGLE CASE: ");
		for(int i=0;i<n;i++)	
				printf("%c",carr[i]);
		printf("\n");

		
}

void p8(){
		printf("\nTake character array ,size of array from user and elements too, Print Occurrence of Vowels & Consonants in array.\n");
		int n;
		printf("size of array: ");
		int vCount=0,cCount=0;//counting
		scanf("%d",&n);
		char arr[n];
				
		printf("Enter the %d characters: ",n);
		for(int i=0;i<n;i++){
				scanf(" %c",&arr[i]);
					if(arr[i]=='a' || arr[i]=='e' || arr[i]=='i' || arr[i]=='o' || arr[i]=='u')
                                                vCount++;

                                        else if(arr[i]=='A' || arr[i]=='E' || arr[i]=='I' || arr[i]=='O' || arr[i]=='U')
                                                vCount++;

                                        else if(arr[i] >= '0' && arr[i] <='9' ){
					}
					
					else
                                                cCount++;

		
		}

		printf("Vowels : %d\n",vCount);
		printf("Consonants : %d\n",cCount);
}

void p9(){
		printf("\nTake integer array and take size of array from user and elements too, reverse the element in array.\n");
		int n;
		printf("Enter the size: ");
		
		scanf("%d",&n);
		int arr[n];
				
		printf("Enter the %d integers: ",n);
		for(int i=0;i<n;i++)
				scanf("%d",&arr[i]);
		
		printf("Reversed: ");
		for(int i=n-1; i>=0 ;i--)
				printf("\t%d",arr[i]);

		printf("\n");
}


void p10(){
		printf("\nTake character array and take size of array from user and elements too, Sort each element in array in ascending order of alphabets and print it.\n");
		int n;
		printf("Size of array: ");
		scanf("%d",&n);
		
		//Test case: 1
		while(n < 0){	
			printf("\nInvalide size(please enter positive integers for size).\n");
			printf("Size of array: ");
			scanf("%d",&n);
		}


		char carr[n];
				
		printf("Enter the %d characters: ",n);
		for(int i=0; i<n ;i++)
				scanf(" %c",&carr[i]);
		

		//Test case 0:converting to small letters
		for(int i=0;i<n;i++){
					if(carr[i]>=65 && carr[i]<=90)
						carr[i] +=32;
		}


		//sorting array	
		char temp;
		for(int i=0;i<n;i++){
				for(int j=1;j<n ;j++){
						
						if(carr[j-1] > carr[j]){
								temp=carr[j-1];
								carr[j-1]=carr[j];
								carr[j]=temp;
						}
				}
		}

		//printing sorted array
		printf("Sorted Array of characters: ");
		for(int i=0;i<n;i++)
					printf("%c",carr[i]);
		

			printf("\n");
		
}



//PROGRAM 11---------------------------------------------------------------------------------------------------------------------------------------

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



void p11(){
		
printf("\nTake an integer array .Take size of array from user and elements too, Check whether each element in array is either palindrome number or strong number if fails to fit in these two then it should check that whether that number is odd or even.\n");
		int n;
		printf("Size of array: ");
		scanf("%d",&n);
		
		//Test Case 0 and 1
		
		while(n < 0 || n%2 == 0 || n > 10){
				printf("\nInvalid size");
				printf("(Please enter the odd No in bet 1 to 10).\n");
				printf("Size of array: ");
				scanf("%d",&n);
				continue; 
		}//end loop
		
		int arr[n]; 	//array 
			
		printf("Enter the %d integers: ",n);
		for(int i=0;i<n;i++)
				scanf("%d",&arr[i]); 		//taking array elements
	
		printf("\n");
		printf("Output\n");
			
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


//Main started here	
void main(){
                int choice;
                char ans;
                do{
		     printf("\n---------*List of code*--------\n");
                     printf("Program 1\n");
                     printf("Program 2\n");
                     printf("Program 3\n");
                     printf("Program 4\n");
                     printf("Program 5\n");
                     printf("Program 6\n");
                     printf("Program 7\n");
                     printf("Program 8\n");
                     printf("Program 9\n");
                     printf("Program 10\n");
                     printf("Program 11\n");
                     printf("\nEnter your choice: ");
                     scanf("%d",&choice);
                     
                     switch(choice){
                     				
					case 1: p1(); 
				        break;
                     			
                     			case 2: p2();                     		
                     			break;
                     			
                     			case 3: p3();                     		
                     			break;
                     			
                     			case 4: p4();                     		
                     			break;
                     			
                     			case 5: p5();                     		
                     			break;
                     			
                     			case 6: p6();                     		
                     			break;
                     			
                     			case 7: p7();                     		
                     			break;
                     			
                     			case 8: p8();                     		
                     			break;
                     			
                     			case 9: p9();                     		
                     			break;
                     			
                     			case 10: p10();                     		
                     			break;
                     			
                     			case 11: p11();                     		
                     			break;
                     			
                     			default: 
                     				printf("\nTry again, Enter valid program number.\n");
                     			break;
                     	}
                     		printf("\nWant another program(y/n): ");
                     		scanf(" %c",&ans);
                    }while(ans=='y');
}

