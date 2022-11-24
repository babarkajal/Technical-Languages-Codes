class IfElseDemo {
    public static void main(String[] args) {
          int x = 20, y=30;

          if(x<y)       //20 < 20 =false go to else
              System.out.println("X is small");
          else
            System.out.println("Y is small");


          x = 10;
          y=11;

          if(++x <= 10)
          /* 11 <=10==>false*/
           {
            System.out.println("x = "+x);
          }

          System.out.println("Out of if statement");       // ==>printed

          //error: int cannot be converted to boolean
          if(x & y) {
            System.out.println("In if");
          }
        }


}
