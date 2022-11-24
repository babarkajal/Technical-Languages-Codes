/*Take 2 D array from user and print it.Also hour glass structure
Entered 2D matrix:
1	2	3
4	5	6
7	8	9
Hour glass structure
1	2	3
	5
7	8	9
*/

import java.util.Scanner;

class MDArray {
        public static void main(String[] args) {
                int arr[][];
                int row,col;

                Scanner sc = new Scanner(System.in);
                System.out.println("Enter size of an array row and col(should be odd): ");
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

                //print hour glass structure
                System.out.println("Hour glass structure");
                //find middle one
                int middle = row/2;

                for(int olc=0; olc<row; olc++) {
                        for(int ilc=0; ilc<col; ilc++) {

                                if( (olc == middle) && (olc==ilc))
                                        System.out.print("\t"+ arr[olc][ilc]);
                                else if(olc!=middle)
                                        System.out.print(arr[olc][ilc]+"\t");
                        }
                        System.out.println();
                }
        }
}
