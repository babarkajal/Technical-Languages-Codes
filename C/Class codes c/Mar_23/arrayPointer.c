//why pointer of one type should store the address of same type??


#include<stdio.h>

void main(){
		char arr[5]={'H','e','l','l','o'};
		int *iptr=arr;			//100
		char *cptr=arr;			//arr contain base address of array i.e. first element add
		
		printf("cptr=%p\n",cptr);	//base add of array
		printf("*cptr= %c\n",*cptr);	//H
		cptr++;

/*		cptr= cptr + 1*sizeof(datatype of pointer)
		    = 100 + 1*1
		    = 101
*/
		printf("After increment of pointer cptr: \n");
		printf("*cptr=%c\n",*cptr);	//e
	

	
		printf("\niptr=%p\n",iptr);	//base add of array
		printf("*iptr= %c\n",*iptr);	//H
		iptr++;

/*		iptr= cptr + 1*sizeof(datatype of pointer)
		    = 100 + 1*4
		    = 104
*/
		printf("After increment of pointer iptr: \n");
		printf("iptr=%c\n",*iptr);  	//o

}




