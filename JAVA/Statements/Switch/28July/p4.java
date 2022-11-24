//switch statment
//default case :
/*    default case is like else for if.
      If no other case matched then it will matched to the default case
      we can write default statment at any plac ein the switch like at the start or middle or at the end.
      but placing default at the end is convention to follow it will be easy for debuging or reading the code
 */
class SwitchDemo{
          public static void main(String[] args) {
              int var = 10;     //matched to the default

              //pass to the switch
              switch(var) {
                    default:
                          System.out.println("Default statement");
                          break;
                    case 1:
                          System.out.println("One");
                          break;
                    case 2:
                          System.out.println("two");
                          break;
                    case 3:
                          System.out.println("three");
                          break;
                    case 4:
                          System.out.println("Four");
                          break;
                    /*default:
                          System.out.println("Default statement");
                          break;
                     */
              }

          }

}
