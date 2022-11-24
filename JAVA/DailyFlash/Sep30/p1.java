//WAP to check whether array contain value

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

                //num to find in an array
                System.out.println("Enter num to find in an array: ");
                int num = Integer.parseInt(input.readLine());

                boolean flag= false;

                //check whether array contain that num or not
                for(int lc=0; lc<n; lc++) {
                        //if yes then break the loop
                        if(arr[lc] == num ) {
                                flag = true;
                                break;
                        }
                }

                if(flag)
                        System.out.println("Yes this elements is present in an array");

                else
                        System.out.println("Not present!!!");


        }
}
