//print frst 10 natural nums

class Program {
  //recursive function
  static void printNatural(int num) {
      System.out.println(num);  // 1 2 3 4 5 6 7 8 9 10
      //base case for the function when the num will become the 10 then it will return the function to its callee function
      if(num==10)
         return;      //for 10 return zala to the 9 then to the 8 upto the first caller means
                      //printNatural(1)
      printNatural(++num);
    }
    //jar recursive function la base condition nasel tr te infinite madhe recursive call kart rahat ani eka point la stackiveflow chi exception det
  public static void main(String[] args) {
      System.out.println("Firts natural num: ");
      printNatural(1);
  }
}
