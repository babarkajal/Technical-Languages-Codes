/* Prorgam to take one side of square from user using bufferedReader & print area & perimeter of square
*/

import java.io.*;

class Sample {
         public static void main(String[] args)  throws IOException{
                 BufferedReader input = new BufferedReader(new InputStreamReader(System.in));                 int side;

                 System.out.println("Enter Side of square: ");
                 side  = Integer.parseInt(input.readLine());


                 System.out.println("Area of this square is " + side*side +"m^2");
                 System.out.println("perimeter of square is " + 4*side + "m");
                 //for above two expressions there is no need to use brackets because * has higher priority than the +
         }
 }
