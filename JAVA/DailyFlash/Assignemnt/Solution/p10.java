/*Program 10: Write a java program to calculate the power of a given number.
Input: number 10, power: 2
Output: 10 to the power 2 is 100
*/

class Program {
    public static void main(String[] args) {
            int num=4, pow = 2,var = pow;
            int power  =0;
            while(pow!= 0 ) {
                power +=num;
                pow--;
            }
            System.out.println(num + " to the Power  "+ var + " is " + power);
    }
}
