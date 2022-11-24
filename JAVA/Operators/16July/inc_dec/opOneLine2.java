class PostIncrement{
      public static void main(String[] args) {
            int num = 10, ans = 0;
            ans  = num++ + num++;
            /*   = 10 + num++                 num = 11
                 = 10 + 11                     num = 12
                 = 21
            */
            //these operators works ar per above but it works in C differently it calls a function which returns reference

            System.out.println("Ans = "+ans);       //21
            System.out.println("Num = "+num);       //12

      }
}
