//Take 2 D array from user and print even elements and its sum
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
                        for(int ilc=0; ilc<row; ilc++)
                                System.out.print(arr[olc][ilc]+"\t");
                        System.out.println();
                }

                int sum = 0;
                System.out.println("Even elements are: ");
                for(int olc=0; olc<row; olc++) {
                        for(int ilc=0; ilc<col; ilc++) {
                                int temp = arr[olc][ilc];
                                if(temp%2 == 0) {
                                        sum+=temp;
                                        System.out.print(temp+"\t");
                                }
                        }
               }
                System.out.println("\nSum of even num: "+sum);

        }
}
