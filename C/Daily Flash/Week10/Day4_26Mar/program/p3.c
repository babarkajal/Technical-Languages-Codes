/*
 * Program 3: Write a Program that accepts a number from user and swaps that
first element from that array with last element of that array.
Input: Length of Array: 6
Enter Elements in Array: 1 2 3 4 5 6
Output: Array Before Swapping: 1 2 3 4 5 6
Array After Swapping : 6 2 3 4 5 1
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
	}
	printf("Array Before Swapping: ");
	for(int i=0; i<num ;i++) 
		printf("%d\t",*(arr+i));
	printf("\n");

	for(int i=0; i< num/2; i++) {
		arr[i]= arr[num-1-i]+arr[i];
		arr[num-i-1] = arr[i] - arr[num-1-i];
		arr[i] = arr[i]-arr[num-1-i];
	}	
	printf("Array after Swapping: ");
	for(int i=0; i<num ;i++) 
		printf("%d    ",*(arr+i));
	printf("\n");


}
