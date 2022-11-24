//3D array using new

import java.util.Scanner;
class Program {

        public static void main(String[] args) {
                int[][][] marr;         //declaration
                Scanner sc = new Scanner(System.in);

                int plane;
                System.out.println("Enter plane: ");
                plane = sc.nextInt();
                System.out.println("Enter rows and column: ");
                int row = sc.nextInt();

                int col = sc.nextInt();

                //allocate memory
                marr = new int[plane][row][col];

                System.out.println("Planes  "+ marr.length);
                System.out.println("rows in first plane: "+marr[0].length);
                System.out.println("column in first plane: "+marr[0][0].length);

                // System.out.println("Enter array elements: ");
                // for(int i=0; i < marr.length; i++) {
                //         System.out.println("Enter elements in plane no "+ i);
                //         for(int j=0; j< marr[i].length; j++) {
                //                 for(int k=0; k< marr[i][j].length; k++)
                //                         marr[i][j][k] = sc.nextInt();
                //         }
                //         System.out.println();
                // }
                // //print the array
                // for(int i=0; i < marr.length; i++) {
                //         System.out.println("Array plane "+ i);
                //         for(int j=0; j< marr[i].length; j++) {
                //                 for(int k=0; k< marr[i][j].length; k++)
                //                         System.out.print(marr[i][j][k] + "  ");
                //                 System.out.println();
                //         }
                //         System.out.println();
                // }

        }
}
