//multidimentional array

import java.util.Scanner;

class MDArray {
        public static void main(String[] args) {
                int arr[][] = new int[3][3];
                Scanner sc = new Scanner(System.in);

                System.out.println("Enter array elements in an array: ");
                for(int olc=0; olc<3; olc++) {
                        for(int ilc=0; ilc<3; ilc++)
                                arr[olc][ilc] = sc.nextInt();   //accept elements
                }
                System.out.println("Entered 2 D array: ");
                for(int olc=0; olc<3; olc++) {
                        for(int ilc=0; ilc<3; ilc++)
                                System.out.print(arr[olc][ilc]+"\t");
                        System.out.println();
                }

        }
}
