
//passing char to the switch
class SwitchDemo{
          public static void main(String[] args) {
              char var = 'z';

              //pass to the switch
              switch(var) {
                    case 'z':
                          System.out.println('Z');
                          break;
                    case 'a':
                          System.out.println("a");
                          break;
                    //case 97:                   duplicate case error as we know character are
                    //                            internally  stored as ascii value
                    //      System.out.println("a-ascii");
                    //      break;
                    case 'A':
                          System.out.println("A");
                          break;
                    default:
                          System.out.println("Default statement");
                          break;

              }

          }

}
