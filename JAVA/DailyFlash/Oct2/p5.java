/* Print transpose of given matrix */

import java.util.Scanner;

class MDArray {
        public static void main(String[] args) {
                int arr[][];
                int row,col;

                Scanner sc = new Scanner(System.in);
                System.out.println("Enter size of an array row and col: ");
                row = sc.nextInt();
                col = sc.nextInt();

                //allocate space
                arr= new int[row][col];

                System.out.println("Enter array elements in an array: ");

                for(int olc=0; olc<arr.length; olc++) {
                        for(int ilc=0; ilc<col; ilc++) {
                                arr[olc][ilc] = sc.nextInt();   //accept elements
                        }
                }

                System.out.println("Entered 2D matrix: ");
                for(int olc=0; olc<row; olc++) {
                        for(int ilc=0; ilc<col; ilc++) {
                                System.out.print(arr[olc][ilc]+"\t");
                        }
                        System.out.println();
                }

                System.out.println("\ntranspose of given matrix");
                for(int olc=0; olc<col; olc++) {
                        for(int ilc=0; ilc<row; ilc++) {
                                System.out.print(arr[ilc][olc]+"\t");
                        }
                        System.out.println();
                }
        }
}
