//switch statment
//Usage of break statement:
//         break is used to stop the loop interation or to break the Switch
//          if we missed the break after switch case then it will execute all the next cases until it found break or end of switch

class SwitchDemo{
          public static void main(String[] args) {
              int var = 2;

              //pass to the switch
              switch(var) {
                    case 1:
                          System.out.println("One");
                    case 2:
                          System.out.println("two");
                    case 3:
                          System.out.println("three");
                    case 4:
                          System.out.println("Four");
                    default:
                          System.out.println("Default statement");
                          break;
              }

          }

}
