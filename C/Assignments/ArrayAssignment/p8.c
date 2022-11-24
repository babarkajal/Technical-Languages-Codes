#include<stdio.h>

void main(){
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
