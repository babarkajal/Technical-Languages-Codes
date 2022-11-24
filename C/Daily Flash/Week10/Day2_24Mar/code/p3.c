/*
 * Program 3: Write a Program that accepts a number from user and prints
Maximum element from that array.
Input: Length of Array: 6
Enter Elements in Array: 1 2 3 14 5 6
Output: Minimum Element Entered In That Array : 1
*
*/

int printf(const char* ,...);
int scanf(const char* ,...);
void main() {

	int num, min;
	printf("Enter length of array: ");
	scanf("%d", &num);
	int arr[num];
	printf("Enter %d num: \n",num);
	for(int i=0; i<num;i++) {
		scanf("%d",(arr+i));

		//store first element in the min for comparison
		if(i==0) 
			min = *(arr+0);

		else if(min > *(arr+i) ) 
			min = *(arr+i);	
	}

	printf("The minimum element from the array : %d\n", min);
	

}

