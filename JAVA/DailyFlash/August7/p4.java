//print maximum digit from num

class Program {
  public static void main(String[] args) {
      //num : store the num
      //max: to store maximum digit .set to 0
      int num = 78659 , max = 0,var = num,rem;

      //seperate the digit from num using % and then dec that num using /
      while(num!=0) {
              rem = num%10;                 //find last digit
              if(rem > max)                 //if maximum is less than rem then store to max
                    max= rem;
              num /=10;                       //dec that num
      }
      System.out.println("Maximum digit from "+var + ": "+ max);
  }
}
