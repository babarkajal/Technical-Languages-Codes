/* write a java program to take 100 value from user and print the reverse order of that particular  num and also check which num is divisible by 5
*/

import java.io.*;
class Program {
    public static void main(String[] args) throws IOException{
        int num;
        System.out.print("Enter integer: ");
        num = Integer.parseInt((new BufferedReader(new InputStreamReader(System.in))).readLine());
        System.out.println(num+" num");
        //use for loop for printing 100 - 1
        System.out.println("Num in reverse order");
        for(int i = num; i>=1; i--) {
              System.out.print(i+"  ");
        }//..for

        System.out.println("\nNum that are divisible by 5");
        for(int i = num; i>=1; i--) {
              if( i%5 == 0)
                   System.out.print(i+" ");
        }//..for
        System.out.println();
    }//..main
}//..class
