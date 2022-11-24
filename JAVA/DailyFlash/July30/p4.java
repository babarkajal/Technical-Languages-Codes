
/* take a num from user and print its relative word
*/
import java.io.*;
class Program {
  public static void main(String[] args)throws IOException {
      int num;
      //take a num for user
      //what does this line means?
      //----- System.in represents Keyboard and we are connecting it with InputStreamReademeans we are taking inputs
      //----- and whatever input is take is stored in buffer object
      BufferedReader input = new BufferedReader(new InputStreamReader(System.in));
      System.out.print("Enter one digit: ");
      //take a value from terminal
      String temp = input.readLine();   //it will read the line from terminal which returin String format
      //then convert it into Int using parseInt method from Integer class
      num = Integer.parseInt(temp);

      //pass that num to the switch
      System.out.print("Entered digit is ");
      switch(num) {
            case 0:
                  System.out.println("Zero");
                  break;
            case 1:
                  System.out.println("One");
                  break;
            case 2:
                  System.out.println("Two");
                  break;
            case 3:
                  System.out.println("Three");
                  break;
            case 4:
                     System.out.println("Four");
                     break;
            case 5:
                  System.out.println("Five");
                  break;
           case 6:
                 System.out.println("Six");
                 break;
            case 7:
                  System.out.println("Seven");
                  break;
            case 8:
                  System.out.println("Eight");
                  break;
            case 9:
                  System.out.println("Nine");
                  break;
            default:
                   System.out.println("You enetered num greater than 10");
                   break;
      }//..switch

  }//..main
}//..class
