class DecrementJava {
  public static void main(String[] args) {
          int num =10, ans =0;
          System.out.println("Predecrement operation");
          ans = --num;                                     //decrement value num = 9
          System.out.println("ans = "+ans);               //9
          System.out.println("num = "+num);               //9

          //post decrement
          num= 10;
          ans = num--;                                    //postdecrement: first assign value to ans and decrements num
          System.out.println("Postdecrement operation");
          System.out.println("ans = "+ans);               //10
          System.out.println("num = "+num);               //9

        }
}
