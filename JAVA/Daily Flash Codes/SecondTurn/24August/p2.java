/*Program 2 : Write a Program to print Sum of First 10 Natural Numbers.
Output: The s um of First 10 Natural Numbers : 55
*/

class Program {
    static int sum=0;
    static int sumOfNum(int num) {
         sum+=num;
         if(num > 10)
              return 0;
         else
              return num + sumOfNum(++num);
    }
    public static void main(String[] args) {
        System.out.println("Sum of all digits from 1- 10: "+ sumOfNum(1));
    }
}
