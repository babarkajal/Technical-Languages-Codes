/*Program 16: Write a java code to find a self-dividing number in which all of the digits
are divisible by the number. (Take a while loop from 0 - 100 and print all the self-
dividing numbers).
Example: Number = 12. Here 1 and 2 divide 12
*/

class Program {
    static boolean isSelfDividing(int num){
              int rem;
              int var = num;
              while(var!=0) {
                  //if any digit doesn't divide the
                  rem = var%10;
                  if( rem!=0) {
                      if(num%rem != 0)
                         return false;
                  }
                  var /= 10;
              }
              return true;
    }
    public static void main(String[] args) {
        System.out.println("Self-dividing numfrom 1-100");
        for(int i=1; i<=100; i++) {
            if(isSelfDividing(i)) {
                System.out.print(i+" \t");
            }
        }
        System.out.println();
    }
}
