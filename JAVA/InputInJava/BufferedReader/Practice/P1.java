
import java.io.*;
class Program {
        public static void main(String[] args) throws IOException{
                BufferedReader input= new BufferedReader(new InputStreamReader(System.in));
                System.out.println("Enter num: ");
                int n = Integer.parseInt(input.readLine());
                System.out.println(input.ready());
                System.out.println("Enter char: ");
                char c = (char)input.read();
                System.out.println(input.ready());
                System.out.println("Enter char to skip: ");
                input.skip(1);
                System.out.println(input.ready());
                System.out.println("Enter float: ");
                float f= Float.parseFloat(input.readLine());

                System.out.println("N = "+n);
                System.out.println("c = "+c);
                System.out.println("f = "+f);
        }

}
