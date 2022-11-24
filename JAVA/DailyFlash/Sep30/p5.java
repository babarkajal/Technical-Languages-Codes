//WAP to take one array of 10 integer and print cout of positive negative even and odd nums
import java.io.*;

class Program {
        public static void main(String[] args) throws IOException {
                //create connection
                BufferedReader input = new BufferedReader(new InputStreamReader(System.in));

                //declare an array of size n
                int arr[] = new int[10];

                //counter to count the occurance of elements
                int evenCount = 0, oddCount = 0, posCount = 0, negCount= 0 , zeroCount=0;;
                //take elements from user
                System.out.println("Enter 10 Integer elements in an array: ");
                for(int lc=0; lc < 10; lc++) {
                        arr[lc] = Integer.parseInt(input.readLine());

                        //for even odd
                        if(arr[lc]%2==0 )
                                evenCount++;
                        else
                                oddCount++;

                        //for positive and negative
                        if(arr[lc] < 0 )
                                negCount++;
                        else if(arr[lc] > 0)
                                posCount++;
                        else
                                zeroCount++;
                }

                System.out.println("Number of positive values: "+ posCount);
                System.out.println("Number of negetive values: "+ negCount);
                System.out.println("Number of even values: "+ evenCount);
                System.out.println("Number of odd values: "+ oddCount);
                System.out.println("Number of  0s: "+ zeroCount);
        }
}
