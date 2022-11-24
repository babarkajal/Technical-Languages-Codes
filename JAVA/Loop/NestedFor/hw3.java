/*
    7 7 7 7
    7 7 7 7
    7 7 7 7
    7 7 7 7
  */

import java.io.*;
  class Pattern {
    public static void main(String[] args) throws IOException{
           //take row from User
           int row;
           System.out.println("Enter row: ");
           row = Integer.parseInt(new BufferedReader(new InputStreamReader(System.in)).readLine());

           for(int outer = 0; outer < row; outer++) {
             for(int inner= 0; inner<row; inner++ ){
                System.out.print("7\t");
             }
              System.out.println();
           }//..outer for

    }//..main
  }//..class
