//Take 2 D array from user and print diagonal elements
import java.util.Scanner;

class MDArray {
        public static void main(String[] args) {
                int arr[][];
                int[ ] diagonal;
                int row;
                Scanner sc = new Scanner(System.in);
                System.out.println("Enter size of an array(Sqaure array): ");
                row = sc.nextInt();

                //allocate space
                arr= new int[row][row];
                diagonal = new int[row];

                int i = 0;
                System.out.println("Enter array elements in an array: ");
                for(int olc=0; olc<row; olc++) {
                        for(int ilc=0; ilc<row; ilc++) {
                                arr[olc][ilc] = sc.nextInt();   //accept elements

                                //diagonal elements
                                if(olc==ilc)
                                        diagonal[i++] = arr[olc][ilc];
                        }
                }

                System.out.println("Entered 2D matrix: ");
                for(int olc=0; olc<row; olc++) {
                        for(int ilc=0; ilc<row; ilc++)
                                System.out.print(arr[olc][ilc]+"\t");
                        System.out.println();
                }

                System.out.print("Diagonal elements are: ");
                for(int lc=0; lc<i; lc++) {
                        System.out.print(diagonal[lc] + "\t");
                }
                System.out.println();

        }
}
