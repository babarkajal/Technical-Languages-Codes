/*Program 3: Write a Program that prints occurrences of a digit from a number, Takeinput hardcoded
Number: 345669760562. Digit to check Frequency: 6
Output: The occurrence of 6 in number 34566970562 is 4.
*/
class Program {
  public static void main(String[] args) {
        int num =  12626;
        int count = 0;
        int digit = 5;

        int var = num;
        while(num!= 0 ){
              if(num%10 == digit)
                    count ++;
              num /=10;
        }
        System.out.println("The occurrence of "+digit + " in number " + var +": "+ count);

  }
}
