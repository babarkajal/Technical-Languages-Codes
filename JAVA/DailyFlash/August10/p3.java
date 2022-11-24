//check for prime num from 1-50

class Prime {
    static boolean isPrime(int num) {
          if(num==1)
              return true;

          boolean flag=true;
          for(int i=2; i<= num/2; i++) {
            if(num%i==0) {
                flag = false;
                break;
              }
          }
          return flag;          //return true or false
    }

    public static void main(String[] args) {
          System.out.println("Prime num from 1- 50");
          for(int i = 1; i<=50; i++) {
              if(isPrime(i)) {
                    System.out.println(i);
              }
          }
    }
}
