// program1:find the number is even or odd using even-odd condition

class EvenOdd {
  public static void main(String[] args) {
          int num=37;
        //  int ans = num%2==0 ?true : false;
        //ternary operator always return a boolean value so here it will show an error that imcomaptible type
        //we can store this ans in boolean variable or else we directly use it in if condition
          if(num%2==0 ?true : false) {
            System.out.println(num+" is even num");
          }
          else {
            System.out.println(num+ " is odd num");
          }
        }
}
