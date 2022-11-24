/*Program 20: Write a Program in Java, Print the following pattern using for loop.
A B C D
a b c d
E F G H
e f g h
*/

class Program {
  public static void main(String[] args) {
        char ch1 = 'A',ch2='a';
        boolean flag = true;
       for(int lc=1,stop=1; lc<=4; lc++,stop++) {
                if(flag)
                    System.out.print(ch1++ + "  ");
                else
                    System.out.print(ch2++ + "  ");

                if(lc%4 == 0) {
                    System.out.println();
                    lc=0;
                    flag = !flag;       //invert the flag
                 }
                 if(stop == 4*4)
                      break;


      }
  }
}
