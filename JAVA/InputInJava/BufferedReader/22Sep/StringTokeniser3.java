/*StringTokenizer Class:
        What if we gave less values in the string
        Consider here 18,virat,A input is given but it expects 4 values so the last one will throw an exception NoSuchElementException for avg value
        To resolve this problem we can do one thing StringTokeniser has one method named as hasMoreTokens()
        public boolean hasMoreTokens():
                returns true if there is any next token available else false

        This confirms that is there any next token available then go for reading
*/
import java.io.*;
import java.util.StringTokenizer;

class Program {
        public static void main(String[] args)throws IOException {
                InputStreamReader isr = new InputStreamReader(System.in);
                BufferedReader ip = new BufferedReader(isr);

                System.out.println("Enter data of player(id name grade avg): ");
                //tokenize the string using seperator ','
                StringTokenizer st = new StringTokenizer(ip.readLine(),",");


                int id = Integer.parseInt(st.nextToken());
                String name = st.nextToken();
                char grade = st.nextToken().charAt(0);
                float avg =0;
                System.out.println("Is there any token available: "+ st.hasMoreTokens());
                if(st.hasMoreTokens()) {
                         avg = Float.parseFloat(st.nextToken());
                }

                System.out.println("Id: "+id);
                System.out.println("Name: "+name);
                System.out.println("Grade: "+grade);
                System.out.println("Avg: "+avg);
        }
}
