/*Program 4: Write a program to find second largest number from the given 3 numbers. Take following set of inputs:-
A] int a = 10, b = 20, c = 30;
<- second largest number is 20
B] int a = 23334, b = 1010, c = 10000 by<- second largest number is 10000
C] int a = 1999, b = 2000, c = 1998
<- second largest number is 1999
Optional: If you know the concept of array in java then solve following test
cases using array.
A] 455 800 56 39 290 18 383 3 290 29 10
B] 10 9 4 5 6 7 8 3
C] 10 8 56 23 45 97
(I would suggest you attempt this option. If you do not know about the
array, you can check on the internet)
*/

class Program {
    public static void main(String[] args) {
        int arr[] = {10, 9, 4, 5, 6, 10, 7, 8, 3};
        System.out.println("Entered array ");
        for (int i=0; i<arr.length ; i++)
            System.out.print(arr[i]+"\t");
        System.out.println();

        //sort the array
        int temp;
        for(int i = 0; i<arr.length; i++) {
            for(int j=i+1; j<arr.length; j++) {
                if(arr[i] < arr[j]) {
                      temp = arr[i];
                      arr[i] = arr[j];
                      arr[j] = temp;
                }
            }
        }

        System.out.println("Sorted array ");
        for (int i=0; i<arr.length ; i++)
            System.out.print(arr[i]+"\t");
        System.out.println();
        
        int i=1;
        while(arr[0] == arr[i]) i++;      //increment the index ecause array may contain same num as a largest like 23 23 21 etc
        System.out.println("Second largest Num is " +arr[i]);
      }
}
