//use left and right shift by negative value
class ShiftDemo {
      public static void main(String[] args) {
          int num= 65;      //65

          int ans = num << -2;      //gives garbage value
          //because here second operand is -2 means there is no any logic behind it that shift by -2 digits
          //we never count digits in -ve manner thats why it gives garbage value
          System.out.println("Ans (num<< -2): "+ ans);
      }
}
