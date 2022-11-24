/*
  write a code in java to chech divisibility of a num by 2 using biutise operator
*/

class Program {
    static boolean isDivisible(int divident, int divisior) {
             //first convert num into binay format
            String bin = Integer.toBinaryString(divident);

            //so here if that nums last digit is 1 then it is divisible by 2
            return (bin.charAt(bin.length()-1) == '0');
    }
    public static void main(String[] args) {
        int num=29;

        if(isDivisible(num,2))
            System.out.println("Num is divisible by 2");
        else
            System.out.println("Num is not divisible by 2");
        }
    }
