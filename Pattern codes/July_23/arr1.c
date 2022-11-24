#include<stdio.h>
void main(){
	int a,n;
	printf("enter the number\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}

	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(arr[i]>arr[j]){
				a=arr[i];
				arr[i]=arr[j];
				arr[j]=a;
			}
		}
	}

	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	
}
