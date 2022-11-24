//WAP to to find index value of particular element

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
                System.out.println("\nEnter elements in an array: ");
                for(int lc=0; lc<n; lc++) {
                        arr[lc] = Integer.parseInt(input.readLine());
                }

                //num to find index
                System.out.println("Enter num to find in an array: ");
                int num = Integer.parseInt(input.readLine());

                //var to store the position
                int pos= -1;

                //check whether array contain that num or not
                for(int lc=0; lc<n; lc++) {
                        //if yes then break the loop
                        if(arr[lc] == num ) {
                                pos = lc;
                                break;
                        }
                }

                if(pos !=-1)
                        System.out.println("Yes this elements is present in an array at index " + pos);

                else
                        System.out.println("element not present!!!");


        }
}
