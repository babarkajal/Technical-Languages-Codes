//Program 2: Write a code in Java, to find Greatest Common Divisor (GCD) of two given numbers.

class Program {
      public static void main(String[] args) {
            int comDiv = 0;
            int num1  = 27;
            int num2  =  45;
            //GCD common divisior  is always less than or equal to small number
            //so first find min num
            int min = num1 < num2 ? num1: num2;

            //traverse upto the min num
            for(int i=1; i<= min; i++ ) {
                //if num divides both the num then it is common divisor
                if(num1 % i==0 && num2 % i==0)
                    comDiv = i;
            }
            System.out.println("Greatest Common Divisor of "+num1+" and "+num2+ ": "+comDiv );
      }
}
