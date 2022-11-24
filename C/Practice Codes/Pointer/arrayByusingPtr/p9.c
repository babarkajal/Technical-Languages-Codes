//accept array and size from user and print it in reverse order

#include <stdio.h>
void main(){
	
	//array
	int arr[20];
	int *ptr=arr;
	int n,i;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	
	//accept array
	printf("Enter %d integers:\n",n);
	for(i=0;i<n;i++){
		scanf("%d",(ptr+i));
	}
	printf("\nReversed array\n");
	for(i=n-1;i>=0;i--){
			printf("%d\t",*(ptr+i));
	}
	printf("\n");
}
	
