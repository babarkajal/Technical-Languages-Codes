//multidimentional array with initlizer list

import java.util.Scanner;

class MDArray {
        public static void main(String[] args) {
                int arr[][]= {1,2,3,4,5,6,7,8,9};               //error
                //because compiler don't know the dimentions of an array and it will think that every elements given in initlizer list is 1D array that why it gives error that int[] cannot be converted to int
                
                System.out.println("Entered 2 D array: ");
                for(int olc=0; olc<3; olc++) {
                        for(int ilc=0; ilc<3; ilc++)
                                System.out.print(arr[olc][ilc]+"\t");
                        System.out.println();
                }

        }
}
