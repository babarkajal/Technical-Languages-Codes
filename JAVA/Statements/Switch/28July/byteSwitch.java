//byte ,short and long


//passing char to the switch
class SwitchDemo{
          public static void main(String[] args) {
              //range for the byte is -128 to 127 as we exceed this limit it will show error that
              // incompatible types:
              byte var1 = (byte)128;
              short var2 = 3;
              switch(var1) {
                    case 127:
                          System.out.println("Hii");
                          break;
                    case -128:
                          System.out.println("Hello");
                          break;
                    default:
                          System.out.println("Default statement");
                          break;

              }
              System.out.println("var1 "+var1);
          }

}
