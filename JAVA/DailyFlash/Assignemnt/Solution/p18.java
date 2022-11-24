/*Program 19: Write a Program in Java, Print the following pattern using for loop.
A B C D
E F G H
I J K L
M N O P
*/

class Program {
  public static void main(String[] args) {
        char ch = 'A';
       for(int lc=1,stop=1; lc<=4; lc++,stop++) {

                System.out.print(ch++ + "  ");
                if(lc%4 == 0) {
                    System.out.println();
                    lc=0;
                 }
                 if(stop == 4*4)
                      break;


      }
  }
}
