//WAP to to student marks and find avg and total marks

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
                System.out.println("Enter marks in an array: ");
                for(int lc=0; lc<n; lc++) {
                        arr[lc] = Integer.parseInt(input.readLine());
                }

                //var to store sum and avg marks
                int sum = 0;
                float per;

                //check whether array contain that num or not
                for(int lc=0; lc<n; lc++) {
                        sum +=arr[lc];
                }

                //consider total marks in each su is 50
                per = sum /n;

                System.out.println("\nSum of marks "+sum);
                System.out.println("Percentage "+ per + " %");


        }
}
