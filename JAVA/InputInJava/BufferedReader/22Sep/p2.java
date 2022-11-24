/* some problems with bufferedReader
  long skip(long):
        skips the n characters from buffer and return how many characters skipped successfully
  boolean ready():
        returns true if buffer is not empty else false
*/

import java.io.*;
class Program {
        public static void main(String[] args)throws IOException {
                InputStreamReader isr = new InputStreamReader(System.in);
                BufferedReader ip = new BufferedReader(isr);

                System.out.println("Enter char: ");
                char grade = (char)ip.read();
                /* cosider input for this
                1. AAA\n grade = A , AA\n skipped characters ==> 3 skipped successfully
                2. AA\n grade = A, A\n skipped characters ==> 2 skipped successfully but it will ask for next input because only 2 are skipped and required are 3
                */
                //int skipped = ip.skip(3);// error incompatible types long ->  int
                System.out.println("Is buffer contain data to skip "+ ip.read());
                long skipped = ip.skip(3);
                System.out.println("Is buffer contain data to skip "+ ip.read());
                System.out.println("successfully character skipped: "+ skipped);
        }
}
