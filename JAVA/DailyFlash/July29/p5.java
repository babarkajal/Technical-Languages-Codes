/*
  write a code in java to check whetehr a num is odd or even using bitwise operator and not using arithmetic operator
*/

class Program {
    static int isEven(int  num) {
           //first convert num into binay format
          String bin = Integer.toBinaryString(num);
          //so here if that nums last digit is 1 then it is divisible by 2
          if (bin.charAt(bin.length()-1) == '0') return 1;
          else
            return 0;
    }
    public static void main(String[] args) {
        int num=27;
        if(isEven(num) ==1) {
            System.out.println("Even num " + num);
        }
        else {
          System.out.println("Odd num " + num);
        }
    }
}
