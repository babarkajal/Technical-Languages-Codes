/*Program 8: Write a Program that takes a number as input from and prints only those digits from that number, which are prime.
I/p:141 (Take a hard coded value)
O/p: the prime digit from the number 141 is 1,
*/

class Program {
    static boolean isPrime(int num) {
            if(num == 1)
                return false;
           for(int i=2; i<=num/2; i++) {
               if(num%i == 0)
                    return false;


          }
            return true;
      }
    public static void main(String[] args) {
             int num = 1473562;
             int var = num;
             System.out.println("Prime digits from num " + var );
             //reduce upto the 0
             while(var!= 0 )  {
                   //check prime or not

                   if(isPrime(var%10)) {
                      System.out.println(var%10 +" ");
                   }
                   var /= 10;   //reduce the num
             }
    }
}
