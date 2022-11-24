/*
Program 4: Write a program that accepts integer input from user and print if it is
prime number or not.
(Note: A prime number is such a number which is only divisible 1 & that number
itself)
Input: 5
Output: 5 is a Prime Number.
*/


#include <stdio.h>

void main()  {
           //num
           //type: int
           //initial value: garbage Value
           //declared to store integer number
           int num;

           //take number from user
           printf("Enter number: \n");
           scanf("%d",&num);

          
          //A prime number is such a number which is only divisible 1 & that number itself
          //Steps to find prime number
          // 1. first calculate number of divisors of num
          //      use for loop to iterate from 1-num
          // 2. if divisor count is 2 then  it is prime number else not

          //variable to store counter of divisors
          int count = 0;
          for(int i=1; i<=num; i++) {
                    //if i is divisor of num then increment counter
                    if(num%i == 0)
                        count++;
          }

          //check the counter is 2 or not
          if(count == 2)
            printf("%d is prime number\n",num);
          else
            printf("%d is not prime number\n",num);



}
