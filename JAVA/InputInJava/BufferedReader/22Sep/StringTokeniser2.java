/*StringTokenizer Class:
        It tokenizes the string on the basis of given seperator by default seperator is space(" ")
        Here "," is used
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
                float avg = Float.parseFloat(st.nextToken());

                System.out.println("Id: "+id);
                System.out.println("Name: "+name);
                System.out.println("Grade: "+grade);
                System.out.println("Avg: "+avg);
        }
}
