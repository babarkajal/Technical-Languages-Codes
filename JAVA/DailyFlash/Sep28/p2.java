/*
Write java program to take two strings as input from user Scanner and print them  in same line .and add space between them.
String1: vijay
String2: Devarkonda
Result: Vijay Devarkonda
*/

//import scanner
import java.util.Scanner;
class Sample {
        public static void main(String[] args) {
                //create connection of scanner object and keyboard
                Scanner sc = new Scanner(System.in);
                System.out.println("Enter string1: ");
                String string1 = sc.next();                     //next method is used to take input

                System.out.println("Enter String2: ");
                String string2 = sc.next();

                System.out.println("Entered strings are: "+ string1 + "  "+ string2);
        }
}
