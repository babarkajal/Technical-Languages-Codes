/* write a program to store num of scores made in given balls
   consider input is num of overs 2 so create array of 12 size bcos there are 6 balls in one over
   and print the num of six ,fours , other(1,2,3) , num of balls and dotballs(0 run)
*/

import java.io.*;
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

                        System.out.println("Enter num of overs: ");
                        n = Integer.parseInt(ip.readLine());

                        //allocate memory to the array 6*n
                        arr = new int[6*n];

                        //accept elements
                        //System.out.println("Enter run on each ball in an array: ");

                        for(int lc=0; lc < 6*n ;lc++) {
                                System.out.print("Enter run on ball no "+ (lc+1)+ ": ");
                                arr[lc] = Integer.parseInt(ip.readLine());
                        }

                        //variable to count num of 6,4 , total score and dotballs
                        int six = 0, four = 0, ball = 0, other =0 , dotballs = 0,temp, total =0;
                        //print the array
                        System.out.print("Entered runs: ");
                        for(int lc=0; lc < n*6 ;lc++) {
                                System.out.print(arr[lc]+ "   ");
                                temp = arr[lc];
                                if(temp == 6)
                                        six++;
                                else if(temp == 4)
                                        four++;
                                else if(temp == 0)
                                        dotballs++;
                                else
                                        other++;
                                total +=temp;
                        }

                        System.out.println("\nTotal score "+ total);
                        System.out.println("num of sixes "+ six);
                        System.out.println("num of fours "+ four);
                        System.out.println("num of others(1,2,3) "+ other);
                        System.out.println("num of dotballs(0 runs ) "+ dotballs);

        }
}
