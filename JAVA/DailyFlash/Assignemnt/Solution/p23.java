/*
 * Program 24: Write a Java program, take a number (Hardcoded) and print the count of
its digits.
Input: enter any number: 234
Output: number of digits: 3
*/

class Program {
    public static void main(String[] args) {
        int num = 1234,var = num , count=0;
        while(var!=0) {
             count++;
             var /= 10;
         }
         System.out.println("Number of digits in "+ num + ": "+ count);
    }
}
