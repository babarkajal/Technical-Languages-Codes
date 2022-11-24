//find maximum between  three numbers
class Program {
    public static void main(String[] args) {
          int num1 = 60, num2 = 40, num3 = 50;
          int max = (num1 > num2) ? (num1 > num3 ? num1: num3) : (num2 > num3 ? num2: num3);
          System.out.println("Maximum num between "+num1 + ", "+num2 +" & "+num3+" is "+max);
    }
}
/*
kajal@KAJAL:~/Desktop/CLASS/Daily Flash/Java/Week1/Day2$ java Program
Maximum num between 60, 40 & 50 is 60
kajal@KAJAL:~/Desktop/CLASS/Daily Flash/Java/Week1/Day2$
*/
