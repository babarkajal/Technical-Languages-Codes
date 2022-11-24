//WAP which takes inp from user in array and print the sum of array

import java.io.*;
import java.util.StringTokenizer;

class Program {
        public static void main(String[] args) throws IOException {
                //declare array variable
                int arr[];
                //declare a variable to take n from user
                int n;
                //variable to store sum
                int sum = 0;

                //create connection
                BufferedReader ip = new BufferedReader(new InputStreamReader(System.in));



                System.out.println("Enter size of an array: ");
                n = Integer.parseInt(ip.readLine());

                //allocate memory to the array
                arr = new int[n];

                //accept elements
                System.out.println("Enter elements " + n + " in an array: ");

                //USe stringTokenizer class
                StringTokenizer st = new StringTokenizer(ip.readLine());

                //tokenize the string and store the array elements
                for(int lc=0; lc <n ;lc++) {
                        arr[lc] = Integer.parseInt(st.nextToken());
                        sum +=arr[lc];
                }


                //print the array
                System.out.print("Entered Array: ");
                for(int lc=0; lc <n ;lc++) {
                        System.out.print(arr[lc]+ "   ");
                }
                System.out.println();

                System.out.println("\nSum of elements: "+ sum);

        }
}
