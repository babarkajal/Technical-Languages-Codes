//using while loop print first 10 num which are divisible by 32 and 7.(break the loop if any num divisible by 32 and 7 is also divisible by 6)


class Program {
  public static void main(String[] args) {
          //to track how many digits are found divisible
          int track = 0,num=1;
          while(track != 10) {
                if(num%7==0 && num%32==0) {
                      track++;                   //we found one num divisible by 7 and 35 => inc counter
                      if(num%6 == 0) {
                            System.out.println("num"+ num);
                            break;                //break the loop when the num found which is
                        }                         //divisible by 6,7 and 32
                      else
                          System.out.println(num);
                }
                num++;                            //inc num
          }
  }
}
