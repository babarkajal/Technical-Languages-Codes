// use BufferedReader class to take input from user
//but BufferedReader ha ek class ahe ani aplyla keyboard through input ghych ahe je ki hardware ahe
//pn in computer language every hardware has file so java madhe tyla System.in ne represent kel jat
// so ethe BufferedReader ahe to System.in shi connect kela jato through InputStreamReader


import java.io.*;       //if this package is not included then for the below class error will be generated
                        //error: cannot find symbol

class InputDemo {
        public static void main(String[] args) throws IOException {

                //create connection System.in .---> InputStreamReader
                InputStreamReader isr = new InputStreamReader(System.in);

                //create connection InputStreamReader --> BufferedReader
                BufferedReader input = new BufferedReader(isr);

                //actually flow kasa asto?
                //first input he InputStreamReader madhe yet char by char ani te buffer madhe accumulate kel jat and nantr desired variable madhe typecast kiva directly as a string mhnun save kel jat

                input.readLine();
                /* ReadLine method is used to take the input from user
                 * but it throws exception that should be handled
                 * this exception occurs if there is not any sufficient memory to store or the connection is
                 * closed
                 * so this can be handled with the help of try catch or throw this exception to the JVM
                 * using throws IOException
                 */


        }
}
