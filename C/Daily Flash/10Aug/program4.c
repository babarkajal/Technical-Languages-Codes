/*Program 4. Write a Program That Prints Palindrome Series From Entered Range Using Nested While Loop.
Input:
Enter Start: 100
Enter End: 200
Output: 101 111 121 131 141 151 161 171 181 191.
*/

#include <stdio.h>

//function to check Palindrome or not
int isPalindrome(int num) {
        /*
          1.find the rev num
          2.check that reversed num is equal to num or not
        */ 
        int rem , rev = 0 , copy = num;
        while(copy) {
            rem = copy%10;
            rev = rev*10+rem;
            copy /=10;
        }
        if(num == rev)
            return 1;
        else
            return 0;
}

void main() {
      int num;
      printf("Palindrome numbers from 100 - 200\n");
      for(int i=100;i<=200; i++) {
           //pass num to the function isPalindrome to check whether num is Palindrome or not
           if(isPalindrome(i))
              printf("%d  ",i);
      }
      printf("\n");
}
