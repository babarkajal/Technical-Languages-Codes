/*StringTokenizer Class:
        It tokenizes the string on the basis of given seperator by default seperator is space(" ")
*/
import java.io.*;
import java.util.StringTokenizer;
class Program {
        public static void main(String[] args)throws IOException {
                InputStreamReader isr = new InputStreamReader(System.in);
                BufferedReader ip = new BufferedReader(isr);

                System.out.println("Enter data of player(id name grade avg): ");
                //tokenize the string
                StringTokenizer st = new StringTokenizer(ip.readLine());
                /*int id = st.nextToken(); if we dont like this it will give error
                StringTokeniser.java:14: error: incompatible types: String cannot be convertedto int
                int id = st.nextToken();
                Means everything is in string format then we have t oconvert it inot particular datatype
                */
                int id = Integer.parseInt(st.nextToken());
                String name = st.nextToken();

                //char grade = (char)st.nextToken();
                /* this is tricky part String cannot be converted to char so here we have to use method
                        charAt(index) to get character from String
                */
                char grade = st.nextToken().charAt(0)
                ;
                float avg = Float.parseFloat(st.nextToken());

                System.out.println("Id: "+id);
                System.out.println("Name: "+name);
                System.out.println("Grade: "+grade);
                System.out.println("Avg: "+avg);
        }
}
