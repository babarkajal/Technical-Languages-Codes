//factorials of num

class Factorials {
    static long factorial(int num) {
        if(num==0 || num ==1)  return 1;
        long fact = 1;
        for(int i=1; i<= num; i++) {
              fact *=i;
        }
        return fact;
     }
    public static void main(String[] args) {
          for(int i=1; i<=10; i++) {
              System.out.println("Factorials of "+ i+" = "+factorial(i));
          }

    }
}
