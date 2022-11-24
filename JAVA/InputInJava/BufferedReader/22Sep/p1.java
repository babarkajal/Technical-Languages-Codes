/* some problems with bufferedReader
  long skip(long):
        skips the n characters from buffer and return how many characters skipped successfully
  boolean ready():
        returns true if buffer is not empty else false
*/

import java.io.*;
class Player {
        public static void main(String[] args)throws IOException {
                InputStreamReader isr = new InputStreamReader(System.in);
                BufferedReader ip = new BufferedReader(isr);
                System.out.println("Enetr Id: ");
                int id = Integer.parseInt(ip.readLine());
                System.out.println("Enter name: ");
                String name = ip.readLine();

                System.out.println("Enter grade: ");
                char grade = (char)ip.read();

                /* read method ekch char read kart. \n ahe te next readLine la allocate kel jat
                 * to check whether the buffer is full or not use ready method. It returns true
                 * when buffer is not empty
                 * to skip this \n ---> skip() method is used
                 */
                 ip.skip(1);
                System.out.println("Enter avg of player: ");
                double avg = Double.parseDouble(ip.readLine()); //NumberformatException occured


                System.out.println("Id: "+id);
                System.out.println("Name: "+name);
                System.out.println("Grade: "+grade);
                System.out.println("Avg: "+avg);
        }
}
