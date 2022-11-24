//byte ,short and long


//passing char to the switch
class SwitchDemo{
          public static void main(String[] args) {
              //range for the short is -32768 to 32767 as we exceed this limit it will show error that
              // incompatible types:
              //In C it won't throw an error because it usese
              //implicit typecasting and if the value exceeds the
              //range then it round the value
              //here we used explicit typecasting concept


              short var1 = (short)32769;
              //we cannot use long value for the switch
              long var2 = 245l;
              switch(var1) {
                    case 32767:
                          System.out.println("Hii");
                          break;
                    case -32768:
                          System.out.println("Hello");
                          break;
                    default:
                          System.out.println("Default statement");
                          break;

              }
              System.out.println("Var is "+var1);
          }

}
