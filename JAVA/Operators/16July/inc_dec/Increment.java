class IncrementJava {
  public static void main(String[] args) {
          int num =10, ans =0;
          ans =++num;                                     //increments value num = 11
          System.out.println("ans = "+ans);               //11
          System.out.println("num = "+num);               //11

          //post increments
          num= 10;
          ans = num++;                                    //postincrement: first assign value to ans and increments num
          System.out.println("ans = "+ans);               //10
          System.out.println("num = "+num);               //11

          ans = num++;
          System.out.println("ans = "+ans);               //11
          System.out.println("num = "+num);               //12
  }
}
