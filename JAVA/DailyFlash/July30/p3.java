//take a num fro user and check whetehr it is greater of less than 0 or equal to

import java.io.*;
class Program {
      public static void main(String[] args) throws IOException{
        int num;
        //take a num for user
        //what does this line means?
        //----- System.in represents Keyboard and we are connecting it with InputStreamReademeans we are taking inputs
        //----- and whatever input is take is stored in buffer object
        BufferedReader input = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Enter integer: ");
        //take a value from terminal
        String temp = input.readLine();   //it will read the line from terminal which returin String format
        //then convert it into Int using parseInt method from Integer class
        num = Integer.parseInt(temp);

        //if num <= 0 then print less than 0 or equal
        if(num <= 0) {
            if(num ==0)
                System.out.println("num is Equal to zero");
            else
                System.out.println("Num is Less than zero");
        }
        else
              System.out.println("Num is Greater than zero");
      }
}
