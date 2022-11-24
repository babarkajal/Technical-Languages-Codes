//WAP to print following pattern

import java.util.Scanner;

class Program {
        public static void main(String[] args) {
                Scanner sc=new Scanner(System.in);

                //declare an array
                char arr[][] = {
                                {'A','B'},{'A','B','C'},{'A','B','C','D'},{'A','B','C','D','E'} , {'A','B','C','D','E','F'}
                };

                System.out.println("Pattern: ");
                for(int i=0; i< arr.length; i++) {
                        for(int j=0; j<arr[i].length; j++) {
                                System.out.print(arr[i][j]+"  ");
                        }
                        System.out.println();
                }
        }
}
