//find all perfect divisiors

class Program {
    public static void main(String[] args) {
          int num = 45;
          System.out.println("All perfect divisors of "+ num);
          for(int i=2; i<=num/2; i++ ) {
            if(num%i==0)
               System.out.print(i+"\t");
          }
          System.out.println();
    }
}
