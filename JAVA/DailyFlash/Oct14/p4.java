/*take array of string from user and print the following pattern
I
am  am
kajal  kajal  kajal 
*/
import java.io.*;
import java.util.StringTokenizer;
class Program {
        public static void main(String[] args)  throws IOException{

                //take input from useer using BufferedReader
                BufferedReader ip = new BufferedReader(new InputStreamReader(System.in));

                //StringTokenizer will take the entire line and tokenizes it using " "
                System.out.println("Enter string: ");
                StringTokenizer st = new StringTokenizer(ip.readLine());

                //System.out.println("Count of strings "+st.countTokens());

                //StringTokenizer has one method named as countTokens which gives num of tokens it contain
                int count = st.countTokens();

                //create arrat of num of strings given in the input
                String arr[] = new String[count];

                //store stirngs in array
                for(int i =0; i< count ;i++)
                        arr[i] = st.nextToken();

                //print the pattern
                System.out.println("pattern\n");
                for(int i=0; i < count ;i++) {
                        for(int j=0; j<=i; j++)
                                System.out.print(arr[i]+"  ");
                        System.out.println();
                }

        }
}
