//Program 1: Write a code in Java, to determine whether the given random year is leap.
class Program {

  static boolean isLeap(int year) {
            /* year is leap
               if it is divisible by 4 and not divisible by 100
               if it is divisible by 400
            */
            if(year %4 ==0 && year %100!= 0)
                return true;
            else if(year%4==0)
                return true;
             return false;
  }
  public static void main(String[] args) {
        int year = 2000;

        if(isLeap(year)) {
              System.out.println(year+" year is Leap");
        }
        else
            System.out.println(year+" year is not leap year");
  }
}
