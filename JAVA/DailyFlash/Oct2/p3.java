//Take 2 D array from user and print it.Also  Print the sum of row and column
import java.util.Scanner;

class MDArray {
        public static void main(String[] args) {
                int arr[][];
                int row,col;

                Scanner sc = new Scanner(System.in);
                System.out.println("Enter size of an array(row and col): ");
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

                int rowSum = 0, colSum = 0, ilc;
                System.out.println("Even elements are: ");
                for(int olc=0; olc<row; olc++) {
                        rowSum = 0;
                        colSum = 0;
                        for(ilc=0; ilc<row; ilc++) {
                                rowSum +=arr[olc][ilc];
                                colSum +=arr[ilc][olc];
                        }
                        System.out.println("Addition of row "+ olc + ": "+ rowSum);
                        System.out.println("Addition of col "+ olc + ": "+ colSum);
               }

        }
}
