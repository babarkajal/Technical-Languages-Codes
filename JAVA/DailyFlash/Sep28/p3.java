/*
Take input from user using scanner class to print gmail account id in the format of string and numerical
*/

import java.io.*;
class Sample {
        public static void main(String[] args) throws IOException{
                //form a connection with system.in
                BufferedReader input = new BufferedReader(new InputStreamReader(System.in));

                String mailString;
                int mailNum;
                System.out.println("Enter string format: ");
                mailString = input.readLine();

                System.out.println("Enter numerical format: ");
                mailNum = Integer.parseInt(input.readLine());

                System.out.println("Mail id: "+ mailString + mailNum + "@gmail.com" );
        }
}
