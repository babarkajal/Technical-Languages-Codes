//print the average of all the num

class Program {
  public static void main(String[] args) {
      //num : store the num
      //sum: to store sum of digit .set to 0
      int num = 5632 , sum = 0,var = num,rem,count = 0;

      //avg to store the average of Num
      float avg;

      //seperate the digit from num using % and then dec that num using /
      while(num!=0) {
              rem = num%10;                 //find last digit
              sum +=rem;                    //find the sum
              num /=10;                       //dec that num
              count ++;
      }
      //calculate average
      avg = sum/count;
      System.out.println("average of all digit from "+var + ": "+ avg);
  }
}
