//boolean value in switch condition


//passing boolean to the switch
class SwitchDemo{
          public static void main(String[] args) {
              	  boolean val = true;
		  //long val1 = 2484733456;
		  //as we know switch is compatible with only int , char,short byte and String
		  //boolean cannot be converted to int
		  //we cannnot typecaste boolea into int
		  switch((int)val) {
                    case 1:
                          System.out.println("true case");
                          break;
                    case 2:
                          System.out.println("false case");
                          break;
                    default:
                          System.out.println("Default statement");
                          break;

              }
          }

}
