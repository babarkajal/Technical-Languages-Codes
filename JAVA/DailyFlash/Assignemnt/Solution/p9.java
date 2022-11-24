/*Program 9: Write a java program to check if the taken number is palindrome or not.
Input: 121 (Take Hardcoded)
Output: 121 is a palindrome number
*/

class Program {
    static boolean isPalindrome(int num) {
          int reversed  = 0,var = num;
          while(num!= 0) {
                reversed = reversed * 10 + (num%10);
                num /=10;
          }
          if(reversed == var)
              return true;
          else
              return false;
    }
    public static void main(String[] args) {
          int num = 14741;
          if(isPalindrome(num))
              System.out.println(num+" is palindrome num");
           else
              System.out.println(num+" is not palindrome num");
    }
}
