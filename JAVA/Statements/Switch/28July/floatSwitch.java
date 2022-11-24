



//passing char to the switch
class SwitchDemo{
          public static void main(String[] args) {
              float var1 = 2.5f;
              double var2 = 3.5;

              //pass to the switch
              //we cannot use float values in the switch condition  it requires int , char, short, byte values
              switch(var1) {
                    case 2.5f:
                          System.out.println("2.5 float value");
                          break;
                    case 3.5:
                          System.out.println("3.5 double value");
                          break;
                    case 3.5f:
                          System.out.println("3.5 float value");
                          break;
                    default:
                          System.out.println("Default statement");
                          break;

              }

          }

}
