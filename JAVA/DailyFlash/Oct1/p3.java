//WAP to print maximum value from an array
import java.io.*;
import java.util.StringTokenizer;

class Program {
        public static void main(String[] args) throws IOException {
                //declare array variable
                int arr[];
                //declare a variable to take n from user
                int n;

                //variable to store maximum value
                int max;

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
                for(int lc=0; lc < n ;lc++) {
                        arr[lc] = Integer.parseInt(st.nextToken());
                }

                //initilize max variable to the first element of an Array
                max = arr[0];

                //print the array
                System.out.print("Entered Array: ");

                for(int lc=0; lc < n ;lc++) {
                        System.out.print(arr[lc]+ "   ");
                        if(max < arr[lc])
                                max = arr[lc];
                }
                System.out.println();

                System.out.println("\ngreatest value: "+ max);

        }

}//class end
