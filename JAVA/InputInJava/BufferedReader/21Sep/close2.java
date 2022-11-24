//code for br.close() method
/*
 * public void close():
 * 	this method closes the stream & releases any stream resources associated with it
 * 	once the stream has been closed furthre read(), readLine(), skip() methods will throw IOException
 */


import java.io.*;

class InputDemo {
         public static void main(String[] args)  throws IOException{
                BufferedReader input= new BufferedReader(new InputStreamReader(System.in));

                System.out.println("Enter roll num: ");
                int roll  = Integer.parseInt(input.readLine());

                System.out.println("Enter name: ");
                String name = input.readLine();
                System.out.println("Name: "+ name + "   Roll no: "  + roll);
                //now work has finished close the stream
                input.close();

                //even after close function we cannot use stream with other ojects
                BufferedReader input2 = new BufferedReader(new InputStreamReader(System.in));
                input2.readLine();             //====> IOException


         }
}
