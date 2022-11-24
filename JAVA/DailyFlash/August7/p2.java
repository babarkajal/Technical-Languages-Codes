//write a program and print addition of even digits and multiplication of add digits from num
class Program {
  public static void main(String[] args) {
      //num : store the num
      //sum :  store the sum of digits
      //mult :  store the multiplication of digits
      //rem: to store the reminder
      int num = 8976 , sum = 0,mult = 1,rem;

      //seperate the digit from num using % and then dec that num using /
      while(num!=0) {
              rem = num%10;                 //find last digit
              if(rem %2==0) {
                  sum +=rem;
              }
              else {
                mult = mult*rem;
              }
              num /=10;                       //dec that num
      }
      System.out.println("Addition of even digits: "+sum);
      System.out.println("Multiplication of odd digits: "+mult);

  }
}
