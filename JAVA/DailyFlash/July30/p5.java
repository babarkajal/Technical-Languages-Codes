/* take a RTO code from user and print the state name*/

import java.io.*;
class Program {
  public static void main(String[] args)throws IOException {

      //take a num for user
      //what does this line means?
      //----- System.in represents Keyboard and we are connecting it with InputStreamReademeans we are taking inputs
      //----- and whatever input is take is stored in buffer object
      BufferedReader input = new BufferedReader(new InputStreamReader(System.in));
      System.out.print("Enter RTO code: ");
      //take a value from terminal
      String code = input.readLine();   //it will read the line from terminal which returin String format

      //pass that code to the switch
      switch(code) {
          case "AP":
                System.out.println("Andra Pradesh");
                break;
          case "MH":
                System.out.println("Maharashtra");
                break;
          case "OD":
                System.out.println("Odisha");
                break;
          case "UP":
                System.out.println("Utter Pradesh");
                break;
          case "KA":
                System.out.println("Karnataka");
                break;
          case "LA":
                System.out.println("Ladakh");
                break;
          default:
                System.out.println("Oops!! Not listed here");
                break;
      }//..switch
    }//..main
  }//..class
