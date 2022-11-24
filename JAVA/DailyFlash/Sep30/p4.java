//WAP to take age of student into an array and find maximum and index

import java.io.*;

class Program {
        public static void main(String[] args) throws IOException {
                //create connection
                BufferedReader input = new BufferedReader(new InputStreamReader(System.in));

                int n;
                System.out.println("Enter size of an array: ");
                n = Integer.parseInt(input.readLine());

                //declare an array of size n
                int arr[] = new int[n];

                //take elements from user
                System.out.println("Enter elements in an array: ");
                for(int lc=0; lc<n; lc++) {
                        arr[lc] = Integer.parseInt(input.readLine());
                }


                int max = 0,posMax = 0;

                //check whether array contain that num or not
                for(int lc=0; lc<n; lc++) {
                        if(max < arr[lc]) {
                                max = arr[lc];
                                posMax = lc;
                        }
                }
                System.out.println("Maximum age is "+ max + " and present at index "+ posMax);


        }
}
