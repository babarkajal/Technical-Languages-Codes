//multidimentional array with initlizer list

import java.util.Scanner;

class MDArray {
        public static void main(String[] args) {
                //int arr[][]= {1,2,3,4,5,6,7,8,9};
                int arr[][] =  {{1,2,3},{4,5,6},{7,8,9}};
                //we can use pair or braces to denote 1D array
                //arr[0] = {1,2,3}
                //arr[1] = {4,5,6}
                //arr[2] = {7,8,9}

                System.out.println("Entered 2D array: ");
                for(int olc=0; olc<3; olc++) {
                        for(int ilc=0; ilc<3; ilc++)
                                System.out.print(arr[olc][ilc]+"\t");
                        System.out.println();
                }

        }
}
