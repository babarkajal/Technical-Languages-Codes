/*
    1  4  9
    16 25 36
    49 64 81
*/

import java.io.*;
  class Pattern {
    public static void main(String[] args) throws IOException{
           //take row from User
           int N;
           System.out.println("Enter row: ");
           N = Integer.parseInt(new BufferedReader(new InputStreamReader(System.in)).readLine());
           int var =1;
           for(int row = 0; row < N; row++) {
             for(int col = 0; col < N; col++ ){
                      System.out.print(var*var+"\t");
                      var++;
             }
              System.out.println();
           }//..outer for

    }//..main
  }//..class
