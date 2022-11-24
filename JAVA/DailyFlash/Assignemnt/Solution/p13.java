/*Program 13: Find whether a number is a Neon number or not. Neon Number -> A
neon number is a number where the sum of digits of square of the number is equal to
the numberb
e.g. 9 is a Neon number but how?
Square of 9 is 81, and sum of digits of 81 i.e. 8 + 1 is 9 again
Input: 9 X
Output: 9 is a neon number
(also give a thought on how many possible neon numbers are there
*/


class Program {
    static boolean isNeon(int num) {
          long square = num*num,temp = square;
          int sum = 0;
          while(temp!=0) {
                sum += (temp%10);
                temp /= 10;
          }
          if(sum == num)
            return true;
          else
            return false;
    }
    public static void main(String[] args) {
        System.out.println("Neon Num from 1-1000");
        for(int i=1; i<=1000; i++) {
            if(isNeon(i))
                System.out.println(i);
        }

    }
}
