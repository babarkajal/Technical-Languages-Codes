/*
    1 2 3 4
    5 6 7 8
    9 10 11 12
    13 14 15 16
  */

import java.io.*;
  class Pattern {
    public static void main(String[] args) throws IOException{
           //take row from User
           int row;
           System.out.println("Enter row: ");
           row = Integer.parseInt(new BufferedReader(new InputStreamReader(System.in)).readLine());
           int var =1;
           for(int outer = 0; outer < row; outer++) {
             for(int inner= 0; inner<row; inner++ ){
                System.out.print(var++ +"\t");
             }
              System.out.println();
           }//..outer for

    }//..main
  }//..class
