#include <stdio.h>


void main() {
	int arr1[] = {10,20,30,40};		//add 100
	int arr2[] = {50,60,70,80};		//add 116

	

	printf("%p\n",(arr1+1));			//104
	//ethe arr +1  = arr+ 1*sizeof(DTP)
	//	       = arr + 1*(4) = 100+4 = 104	//karan eth datatype int ahe
	//	       = 104
	//	       
	

	printf("%p\n",&arr1+1);				//116
	// &arr1+1	= &arr +1  
	//	   	= 100 + 1*sizeof(whole array)
	//	   	= 100 + 1*(16) = 116
	//	   	= 116
	

	int *ptr1 = arr1; 	//jevha apan ekdhya pointer madhe array cha address store karto tevha to ek normal pointer asto

	printf("%p\n",ptr1+1);				//104
	// ptr+1 = 100+1*sizeof(DTP) = 100+1*4 = 104
	
	int *ptr2 = &arr1+1; 	//ethe  arthimetic perform kartna arr1 chi size consider keli  jail
	// ptr+1 = 100+1*sizeof(whole array) = 100+1*16 = 116

	printf("%p\n",ptr2);				//116

	int *ptr3 = &arr1;	//normal pointer mhnun address ghetla jato
	//	arr1+1*4 = 104
	printf("%p\n",(ptr3+1));				//104

	
}
