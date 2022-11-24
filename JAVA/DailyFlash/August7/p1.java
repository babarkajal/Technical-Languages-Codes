// write a program  to count num of digits in a num

class Program {
  public static void main(String[] args) {
      //num : store the num
      //count :  store the count of digits
      int num = 8976 , count = 0;
      int var = num;
      //seperate the digit from num using % and then dec that num using /
      for(;num!=0; count++,num = num/10);
      System.out.println("Num of digits in "+var+ " are "+ count);

  }
}
