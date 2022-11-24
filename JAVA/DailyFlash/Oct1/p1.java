//WAP which takes inp from user in array and print the array in reverse order

import java.io.*;
import java.util.StringTokenizer;

class Program {
        public static void main(String[] args) throws IOException {
                //declare array variable
                int arr[];
                //create connection
                BufferedReader ip = new BufferedReader(new InputStreamReader(System.in));

                //declare a variable to take n from user
                int n;
                System.out.println("Enter size of an array: ");
                n = Integer.parseInt(ip.readLine());

                //allocate memory to the array
                arr = new int[n];

                //accept elements
                System.out.println("Enter elements " + n + " in an array: ");

                //USe stringTokenizer class
                StringTokenizer st = new StringTokenizer(ip.readLine());
                System.out.println("St = "+st);

                //tokenize the string and store the array elements
                for(int lc=0; lc <n ;lc++) {
                        arr[lc] = Integer.parseInt(st.nextToken());
                }


                //print the array
                System.out.print("Entered Array: ");
                for(int lc=0; lc <n ;lc++) {
                        System.out.print(arr[lc]+ "   ");
                }
                System.out.println();


                //print reverse Array
                System.out.print("\nArray in reverse order: ");
                for(int lc=0; lc< n; lc++) {
                        System.out.print(arr[n-1-lc] +"   ");
                }
                System.out.println();

        }
}
