

import java.io.*;       //if this package is not included then for the below class error will be generated
                        //error: cannot find symbol

class InputDemo {
        public static void main(String[] args) throws IOException {

                //create connection System.in .---> InputStreamReader
                InputStreamReader isr = new InputStreamReader(System.in);

                //create connection InputStreamReader --> BufferedReader
                BufferedReader input = new BufferedReader(isr);
                System.out.println(input.ready());
                //actually flow kasa asto?
                //first input he InputStreamReader madhe yet char by char ani te buffer madhe accumulate kel jat and nantr desired variable madhe typecast kiva directly as a string mhnun save kel jat

                String name = input.readLine();         //input from buffer  should be stored somewhere
                System.out.println("Entered Name: "+name);
                char c = (char)input.read();
                System.out.println(input.ready());
        }
}
