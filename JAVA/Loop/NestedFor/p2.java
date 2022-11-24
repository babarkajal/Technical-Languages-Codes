/*
    = = = =
    * * * *
    * * * *
    = = = =
  */

import java.io.*;
  class Pattern {
    public static void main(String[] args) throws IOException{
           //take row from User
           int N;
           System.out.println("Enter row: ");
           N = Integer.parseInt(new BufferedReader(new InputStreamReader(System.in)).readLine());

           for(int row = 0; row < N; row++) {
             for(int col = 0; col < N; col++ ){
                    if(row==0 || row == N-1 )
                      System.out.print("=\t");
                    else
                      System.out.print("*\t");
             }
              System.out.println();
           }//..outer for

    }//..main
  }//..class
