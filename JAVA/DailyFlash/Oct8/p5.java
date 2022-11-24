//WAP for 2d jagged array from user and print the sum of num which are divisible by 5

import java.util.Scanner;
class Program {
        public static void main(String[] args) {

                //create connection of system.in with the scanner class
                Scanner sc = new Scanner(System.in);

                //var to store the sum
                int sum = 0;

                System.out.println("Enter how may rows are there for an array: :");
                int row  = sc.nextInt(), col = 0;
                //declare an array of row
                int[][] arr = new int[row][];

                for(int olc =0; olc<row; olc++) {
                        //take how many elements for row olc
                        System.out.println("Enter how many elements are there for row " + olc +": ");
                        col= sc.nextInt();

                        //declare an 1D array
                        arr[olc] = new int[col];
                        System.out.println("Enter elements: ");
                        for(int ilc=0; ilc < col; ilc++) {
                                arr[olc][ilc] = sc.nextInt();
                        }

                }

                //print entered array
                System.out.println("Entered array: ");
                for(int olc = 0; olc < arr.length; olc++) {
                        for(int ilc=0; ilc<arr[olc].length; ilc++) {
                                System.out.print(arr[olc][ilc] + "  ");

                                //if that num is divisible by 5 then find sum of those num
                                if( arr[olc][ilc] % 5 == 0)
                                        sum +=arr[olc][ilc];
                        }
                        System.out.println();
                }

                System.out.println("\nSum of numbers which are divisible by 5: "+sum);

        }
}
