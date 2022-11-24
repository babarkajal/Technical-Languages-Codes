class LogicalDemo {
    public static void main(String[] args) {

      int x =2;
      int y =3;
      boolean ans;

      ans = (++x < y++) && (x++ < ++y);
      /*  = (3 < 3 ) && (x++ < ++y)     x = 3, y =4
          = false
          second exp never executed because first is false
      */
      System.out.println("ans = "+ans);   //false
      System.out.println("x = "+x);     //3
      System.out.println("y = "+y);     //4

      ans =  (++x <= y++) || (x++ > ++y);
      /*  = (4 <= 4 ) || (x++ > ++y);
          = true
          second exp never executed because first is true
      */
      System.out.println("ans = "+ans);   //true
      System.out.println("x = "+x);     //4
      System.out.println("y = "+y);     //5
    }
}
