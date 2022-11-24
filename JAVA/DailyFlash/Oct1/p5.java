/* declare two arrays of same size
first one take from user and second one initilize it to the zero
check elements of first array if element is even then insert -1 at the same index in second arrays
*/

import java.io.*;
class Program {
        public static void main(String[] args)  throws IOException {
                //declare two arrays
                int arr1[], arr2[];

                //declare a variable to take n from user
                int n;

                //create connection
                BufferedReader ip = new BufferedReader(new InputStreamReader(System.in));

                System.out.println("Enter size of an array: ");
                n = Integer.parseInt(ip.readLine());

                //allocate memory to the array
                arr1 = new int[n];
                arr2 = new int[n];

                System.out.println("Enter elements in an array");
                for(int lc=0; lc < n ;lc++) {
                        arr1[lc] = Integer.parseInt(ip.readLine());
                        //if element is even then insert -1 in second array
                        if(arr1[lc]%2 == 0)
                                arr2[lc] = -1;
                }

                //print the array
                System.out.print("Array1: ");
                for(int lc=0; lc < n ;lc++) {
                        System.out.print(arr1[lc]+ "   ");
                }
                System.out.println();
                //print the array
                System.out.print("Array2: ");
                for(int lc=0; lc < n ;lc++) {
                        System.out.print(arr2[lc]+ "   ");
                }
                System.out.println();
        }
}
