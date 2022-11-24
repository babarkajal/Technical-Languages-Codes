/* Scanner class
        Has method to read the data and provide directly the data instead of parsing it using wrapper Class
*/

import java.util.Scanner;
class Program {
        public static void main(String[] args) {
                //create connection
                Scanner sc = new Scanner(System.in);
                System.out.println("Enter Integer: ");
                int i = sc.nextInt();
                System.out.println("Enter float: ");
                float f = sc.nextFloat();
                System.out.println("Enter char: ");
                //char c = sc.next();//-->error
                char c = sc.next().charAt(0);
                System.out.println("Integer "+ i);
                System.out.println("Float "+f);
                System.out.println("Char "+ c);
        }
}
