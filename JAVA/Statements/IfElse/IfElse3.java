class IfElseDemo {
    public static void main(String[] args) {
          int x = 10, y=11;

          if(x++ <= y++)
          /* 10 < 11==true        //x = 11 y =12
          */
          {
              System.out.println("In if");        //->printed
              System.out.println("x = "+x);       //11
              System.out.println("y = "+y);       //12
          }
          else {
            System.out.println("In else");
            System.out.println("x = "+x);
            System.out.println("y = "+y);
          }

          x = 10;
          y=11;
          if(++x < y++ )
          /* 11 < 11            //x=11, y=12
            =>false
          */
          {
            System.out.println("In if");
            System.out.println("x = "+x);
            System.out.println("y = "+y);
          }

          else {
            System.out.println("In else");      //->printed
            System.out.println("x = "+x);       //11
            System.out.println("y = "+y);       //12
          }

        }
}
