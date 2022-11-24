/*write a prorgam to print following pattern
1 1 1 1
1 1 1 1
1 1 1 1
1 1 1 1
*/

class Program {
  public static void main(String[] args) {
      for(int i=1; i<=16; i++) {
          System.out.print("1   ");
          if(i%4==0)
              System.out.println();
      }
  }
}
