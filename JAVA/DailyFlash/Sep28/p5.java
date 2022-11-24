/*
pattern
        01010
        10101
        01010
        10101
        01010
*/

import java.util.Scanner;
class Sample {
        public static void main(String[] args) {

                Scanner sc = new Scanner(System.in);
                System.out.print("Enter row: ");
                int row = sc.nextInt();

                for(int outer = 0; outer < row; outer++) {
                        for(int inner = 0; inner < row; inner++) {
                                //when addition of outer and inner counter is even then print 0 otherwise 1
                                if((outer + inner)%2 == 0)
                                                System.out.print(" 0 ");
                                else
                                                System.out.print(" 1 ");

                        }
                        System.out.println();
                }
        }
}
