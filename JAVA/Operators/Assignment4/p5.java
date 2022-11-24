
class Arithmetic {
        int x = 10;
        int y =20;
        static char op='+';

        //set operator
        static void setOp(char opInput) {
            op = opInput;
        }

        void add() {
          System.out.println("Addition "+ op +": "+ (x + y));
        }

        void sub() {
            System.out.println("substraction "+op+": " +(x - y));
        }

        void mult() {
            System.out.println("Multiplication "+op+": " +(x * y));
        }
        void div() {
            System.out.println("Division "+op+": " +(x / y));
        }

}



class IPL {
          boolean isMatchStarted = false;
          static boolean postPonned = true;
          boolean isRain =true;

         void matchInfo() {
            if(isMatchStarted && isRain) {        //if these both conditions are true then condition is true
                System.out.println("Match is stopped due to sudden rain");
            }
            else {
                System.out.println("Rain is not there");
            }
            if(isRain || isMatchStarted) {
                  System.out.println("Match already started we cannot stop it");
            }
         }

         static void iplInfo() {
                System.out.println("IPl is postpoed status "+postPonned);       //due to corona virun IPL is postponned
         }
}

class bitwisedDemo {
          int i = 2;
          int j = 3;

          void operations() {
              System.out.println("i & j "+ (i&j));
              System.out.println("i | j "+ (i|j));
              System.out.println("i ^ j "+ (i^j));
              System.out.println("i << j "+(i << j));
              System.out.println("i >> j "+(i >> j));
              System.out.println("i >>> j "+(i >>> j));
          }
}

class OperatorDemo {
    public static void main(String[] args) {
      System.out.println("-------------- Arithmetic operators ---------------");
        Arithmetic operation1 = new Arithmetic();
        operation1.add();
        operation1.setOp('-');
        operation1.sub();
        operation1.setOp('*');
        operation1.mult();
        operation1.setOp('/');
        operation1.div();

        System.out.println("-------------- Logical operators ---------------");
        IPL IndvsAus = new IPL();
        IndvsAus.isMatchStarted = true;
        IndvsAus.iplInfo();
        IndvsAus.matchInfo();

        System.out.println("-------------- bitwise operators ---------------");
        bitwisedDemo op = new  bitwisedDemo();
        op.operations();
      }
}
