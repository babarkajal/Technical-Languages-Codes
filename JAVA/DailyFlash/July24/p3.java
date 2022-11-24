/*p3.java
    write a program to get any num and check whether the num is greater than or less than or equal to
    another num
  */

class Program {
  public static void main(String[] args) {
          int i =20, j=30;
          System.out.println("Using is else");
          if(i <  j) {
              System.out.println(j+" is greater");
          } else if(i > j)
                System.out.println(i+" is greater ");
            else
                System.out.println("Eqaul");
          System.out.println("\nUsing Ternary operator");
          System.out.println("Greater num: "+ (i > j ? i: j));
    }
}
