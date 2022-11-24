/*Program 15: Write a java code to count the number of steps required for a number to
reduce it to zero.(Take a hardcoded value and write the number of steps required to
make it zero).
Input - num = 8
Output - steps required = 4
Input - num = 123
Output - steps required = 12
*/

class Program {
  public static void main(String[] args) {
       int num=1,rem,step=0,var = num;
       //reduce it by 2
       while(num!=0) {
            //if num is even then divide it by 2 or if odd then substract on
            if(num%2==0) {
                  num /=2;
            }else {
                num-=1;
            }
            step++;
       }

       System.out.println("number of steps required to reduce a num "+ var+" = " +step);

  }
}
