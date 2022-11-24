
//take a initial character print languange name e.g j for java

class Program {
      public static void main(String[] args) {
              char ch = 'P';

              //switch to match the character
              //we can pass char to the switch because it it int converted
              switch(ch) {
                  //'j' or 'J' matched to this case so it will print java for this one
                  case 'j':
                  case 'J':
                        System.out.println("Java");
                        break;
                  case 'c':
                  case 'C':
                        System.out.println("C languange");
                        break;

                  case 'p':
                  case 'P':
                         System.out.println("Python");
                         break;
                  case 'a':
                  case 'A':
                        System.out.println("Android");

             }
      }
}
