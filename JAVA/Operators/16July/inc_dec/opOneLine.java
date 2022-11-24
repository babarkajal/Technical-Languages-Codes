class PreIncrement{
      public static void main(String[] args) {
            int num = 10, ans = 0;
            ans  = ++num + ++num;
            /*   = 11 + ++num                 num = 11
                 = 11 + 12                     num = 12
                 = 23
            */
            //these operators works ar per above but it works in C differently it calls a function which returns reference

            System.out.println("Ans = "+ans);
            System.out.println("Num = "+num);

      }
}
